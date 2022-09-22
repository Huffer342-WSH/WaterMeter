#include <Driver_MSP4021/Drive_st7796/hal_st7796.h>
#include <Driver_MSP4021/Drive_xpt2046/bsp_xpt2046.h>
#include <Driver_MSP4021/Drive_xpt2046/hal_xpt2046.h>

extern uint8_t flag;

strType_XPT2046_TouchPara strXPT2046_TouchPara[] = {
    {-0.001712, -0.081929, 326.995483, -0.122329, -0.000251, 499.837891},  //模式0校准系数
    {-0.124054, -0.001815, 503.319275, -0.001037, -0.083610, 328.638000},  //模式1校准系数
    {-0.001527, 0.080091, 1.158449, -0.123664, 0.000867, 499.239746},      //模式2校准系数
    {-0.120907, 0.002117, 492.230499, 0.002437, 0.084838, -16.458757},     //模式3校准系数
    {-0.002127, -0.082863, 333.346619, 0.123210, 0.000255, -21.971294},    //模式4校准系数
    {0.123263, -0.000190, -22.789387, -0.001392, -0.082133, 326.458618},   //模式5校准系数
    {0.000258, 0.083039, -6.502584, 0.124430, 0.004262, -32.619884},       //模式6校准系数
    {0.122871, -0.000821, -19.415018, 0.001642, 0.082251, -12.434340}      //模式7校准系数
};

void XPT2046_Init(void) { XPT2046_IO_Config(); }

uint8_t XPT2046_Is_Pressed() { return XPT2046_PENIRQ_Read() == XPT2046_PENIRQ_ActiveLevel; }

/**
 * @brief  对 XPT2046 选择一个模拟通道后，启动ADC，并返回ADC采样结果
 * @param  ucChannel
 *   该参数为以下值之一：
 *     @arg 0x90 :通道Y+的选择控制字
 *     @arg 0xd0 :通道X+的选择控制字
 * @retval 该通道的ADC采样结果
 */
static uint16_t XPT2046_ReadAdc(uint8_t ucChannel) {
    XPT2046_WriteCMD(ucChannel);
    return XPT2046_ReadCMD();
}
/**
 * @brief  读取 XPT2046 的X通道和Y通道的AD值（12 bit，最大是4096）
 * @param  sX_Ad ：存放X通道AD值的地址
 * @param  sY_Ad ：存放Y通道AD值的地址
 * @retval 无
 */
static void XPT2046_ReadAdc_XY(int16_t *sX_Ad, int16_t *sY_Ad) {
    *sX_Ad = XPT2046_ReadAdc(XPT2046_CHANNEL_X);
    XPT2046_DelayUS(1);
    *sY_Ad = XPT2046_ReadAdc(XPT2046_CHANNEL_Y);
}

#if 1
static uint8_t XPT2046_ReadAdc_Smooth_XY(int16_t *origPosX, int16_t *origPosY) {
    uint8_t ucCount = 0, i;

    int16_t sAD_X, sAD_Y;
    int16_t sBufferArray[2][10] = {{0}, {0}};  //坐标X和Y进行多次采样

    //存储采样中的最小值、最大值
    int32_t lX_Min, lX_Max, lY_Min, lY_Max;

    /* 循环采样10次 */
    do {
        XPT2046_ReadAdc_XY(&sAD_X, &sAD_Y);

        sBufferArray[0][ucCount] = sAD_X;
        sBufferArray[1][ucCount] = sAD_Y;

        ucCount++;

    } while ((XPT2046_PENIRQ_Read() == XPT2046_PENIRQ_ActiveLevel) &&
             (ucCount < 10));  //用户点击触摸屏时即TP_INT_IN信号为低 并且 ucCount<10

    /*如果成功采样10个样本*/
    if (ucCount == 10) {
        lX_Max = lX_Min = sBufferArray[0][0];
        lY_Max = lY_Min = sBufferArray[1][0];

        for (i = 1; i < 10; i++) {
            if (sBufferArray[0][i] < lX_Min)
                lX_Min = sBufferArray[0][i];

            else if (sBufferArray[0][i] > lX_Max)
                lX_Max = sBufferArray[0][i];
        }

        for (i = 1; i < 10; i++) {
            if (sBufferArray[1][i] < lY_Min)
                lY_Min = sBufferArray[1][i];

            else if (sBufferArray[1][i] > lY_Max)
                lY_Max = sBufferArray[1][i];
        }

        /*去除最小值和最大值之后求平均值*/
        *origPosX =
            (sBufferArray[0][0] + sBufferArray[0][1] + sBufferArray[0][2] + sBufferArray[0][3] +
             sBufferArray[0][4] + sBufferArray[0][5] + sBufferArray[0][6] + sBufferArray[0][7] +
             sBufferArray[0][8] + sBufferArray[0][9] - lX_Min - lX_Max) >>
            3;

        *origPosY =
            (sBufferArray[1][0] + sBufferArray[1][1] + sBufferArray[1][2] + sBufferArray[1][3] +
             sBufferArray[1][4] + sBufferArray[1][5] + sBufferArray[1][6] + sBufferArray[1][7] +
             sBufferArray[1][8] + sBufferArray[1][9] - lY_Min - lY_Max) >>
            3;

        return 0;
    }
    return 1;
}
#else
#define ERR_LIMIT 20
static uint8_t XPT2046_ReadAdc_Smooth_XY(int16_t *origPosX, int16_t *origPosY) {
    int16_t sAD_X = 0, sAD_Y = 0, sAD_X_pre, sAD_Y_pre;

    //存储采样中的最小值、最大值
    int32_t lX_Sum = 0, lY_Sum = 0;
    uint8_t Count = 0, timeoutCount = 0;

    /* 循环采样10次 */
    do {
        sAD_X_pre = sAD_X;
        sAD_Y_pre = sAD_Y;
        timeoutCount++;
        XPT2046_ReadAdc_XY(&sAD_X, &sAD_Y);
        if (sAD_X - sAD_X_pre > -ERR_LIMIT && sAD_X - sAD_X_pre < ERR_LIMIT) {
            lX_Sum += sAD_X;

        } else {
            goto READ_ADC_RESET;
        }
        if (sAD_Y - sAD_Y_pre > -ERR_LIMIT && sAD_Y - sAD_Y_pre < ERR_LIMIT) {
            lY_Sum += sAD_Y;

        } else {
            goto READ_ADC_RESET;
        }
        /*X,Y坐标均为超出阈值*/
        Count++;
        /* 多次稳定在小范围内 */
        if (Count == 4) {
            *origPosX = sAD_X;
            *origPosY = sAD_Y;
            return 0;
        }
        continue;
    READ_ADC_RESET:
        lX_Sum = 0;
        lY_Sum = 0;
        Count = 0;

    } while ((XPT2046_PENIRQ_Read() == XPT2046_PENIRQ_ActiveLevel) &&
             (timeoutCount < 10));  //用户点击触摸屏时即TP_INT_IN信号为低 并且 ucCount<10

    return 1;
}

#endif

/**
 * 它从 XPT2046 读取原始 ADC 值，然后应用校准矩阵将原始 ADC 值转换为屏幕坐标
 *
 * @param posX 触控点的X坐标
 * @param posY 触摸点的Y坐标
 * @param pTouchPara 触摸屏的校准参数。
 * @param scanMode 屏幕的扫描模式
 *
 * @return 值为 0 或 1。
 */
uint8_t XPT2046_Get_TouchedPoint(int16_t *posX, int16_t *posY,
                                 strType_XPT2046_TouchPara *pTouchPara, uint8_t scanMode) {
    int16_t origPosX, origPosY;
    if (!XPT2046_ReadAdc_Smooth_XY(&origPosX, &origPosY)) {
        *posX = ((pTouchPara[scanMode].dX_X * origPosX) + (pTouchPara[scanMode].dX_Y * origPosY) +
                 pTouchPara[scanMode].dX);
        *posY = ((pTouchPara[scanMode].dY_X * origPosX) + (pTouchPara[scanMode].dY_Y * origPosY) +
                 pTouchPara[scanMode].dY);
    } else {
        return 1;  //如果获取的触点信息有误，则返回0
    }
    return 0;
}

/***************************end of file*****************************/
