#include <Driver_MSP4021/Drive_st7796/hal_st7796.h>

const static uint8_t initRegCount[] = {1, 1, 1, 1,  1,  2, 4, 2, 1, 1, 1, 1,
                                       8, 0, 0, 14, 14, 1, 1, 1, 0, 0, 0};
const static uint8_t initRegCmd[] = {0xF0, 0xF0, 0x36, 0x3A, 0xB0, 0xB6, 0xB5, 0xB1,
                                     0xB4, 0xB7, 0xC5, 0xE4, 0xE8, 0xC2, 0xA7, 0xE0,
                                     0XE1, 0X36, 0xF0, 0xF0, 0X13, 0X11, 0X29};
const static uint8_t initRegValue[] = {
    // 0xF0
    0xC3,
    // 0xF0
    0x96,
    // 0x36
    0x68,
    // 0x3A
    0x05,
    // 0xB0
    0x80,
    // 0xB6
    0x00, 0x02,
    // 0xB5
    0x02, 0x03, 0x00, 0x04,
    // 0xB1
    0x80, 0x10,
    // 0xB4
    0x00,
    // 0xB7
    0xC6,
    // 0xC5
    0x24,
    // 0xE4
    0x31,
    // 0xE8
    0x40, 0x8A, 0x00, 0x00, 0x29, 0x19, 0xA5, 0x33,
    // 0xC2
    // 0xA7
    // 0xE0
    0xF0, 0x09, 0x13, 0x12, 0x12, 0x2B, 0x3C, 0x44, 0x4B, 0x1B, 0x18, 0x17, 0x1D, 0x21,
    // 0XE1
    0xF0, 0x09, 0x13, 0x0C, 0x0D, 0x27, 0x3B, 0x44, 0x4D, 0x0B, 0x17, 0x17, 0x1D, 0x21,
    // 0X36
    0xEC,
    // 0xF0
    0xC3,
    // 0xF0
    0x69,
    // 0X13
    // 0X11
    // 0X29
};

//根据液晶扫描方向而变化的XY像素宽度
//调用ST7796_GramScan函数设置方向时会自动更改
uint16_t LCD_X_LENGTH = ST7796_LESS_PIXEL;
uint16_t LCD_Y_LENGTH = ST7796_MORE_PIXEL;

//液晶屏扫描模式，本变量主要用于方便选择触摸屏的计算参数
//参数可选值为0-7
//调用ST7796_GramScan函数设置方向时会自动更改
// LCD刚初始化完成时会使用本默认值
uint8_t LCD_SCAN_MODE = 6;

/**
 * @brief  初始化ST7796寄存器
 * @param  无
 * @retval 无
 */
static void ST7796_REG_Config(void) {
    uint16_t valueCnt = 0;
    uint16_t len = sizeof(initRegCount)/sizeof(initRegCount[0]);
    for (uint8_t i = 0; i < len; ++i) {
        ST7796_Write_Cmd(initRegCmd[i]);
        for (uint8_t j = 0; j < initRegCount[i]; ++j) {
            ST7796_Write_Data(initRegValue[valueCnt++]);
        }
    }
    ST7796_Write_Cmd(0x11);
    ST7796_Delay(120);

    /* Display ON (29h) */
    ST7796_Write_Cmd(0x29);
}

/**
 * @brief  ST7796初始化函数，如果要用到lcd，一定要调用这个函数
 * @param  无
 * @retval 无
 */
void ST7796_Init(void) {
    // ST7796_IO_Config();
    __HAL_SPI_ENABLE(&ST7796_HSPI);
    ST7796_Rst();
    ST7796_REG_Config();
    //设置默认扫描方向，其中 6 模式为大部分液晶例程的默认显示方向
    ST7796_GramScan(4);
}

/**
 * @brief  设置ST7796的GRAM的扫描方向
 * @param  ucOption ：选择GRAM的扫描方向
 *     @arg 0-7 :参数可选值为0-7这八个方向
 *
 *	！！！其中0、3、5、6 模式适合从左至右显示文字，
 *				不推荐使用其它模式显示文字	其它模式显示文字会有镜像效果
 *
 *	其中0、2、4、6 模式的X方向像素为240，Y方向像素为320
 *	其中1、3、5、7 模式下X方向像素为320，Y方向像素为240
 *
 *	其中 6 模式为大部分液晶例程的默认显示方向
 *	其中 3 模式为摄像头例程使用的方向
 *	其中 0 模式为BMP图片显示例程使用的方向
 *
 * @retval 无
 * @note  坐标图例：A表示向上，V表示向下，<表示向左，>表示向右
 X表示X轴，Y表示Y轴

 ------------------------------------------------------------
 模式0：				.		模式1：		.	模式2：			.	模式3：
 A		.					A		.		A					.		A
 |		.					|		.		|					.		|
 Y		.					X		.		Y					.		X
 0		.					1		.		2					.		3
 <--- X0 o		.	<----Y1	o		.		o 2X--->  .		o 3Y--->
 ------------------------------------------------------------
 模式4：				.	模式5：			.	模式6：			.	模式7：
 <--- X4 o		.	<--- Y5 o		.		o 6X--->  .		o 7Y--->
 4		.					5		.		6					.		7
 Y		.					X		.		Y					.		X
 |		.					|		.		|					.		|
 V		.					V		.		V					.		V
 ---------------------------------------------------------
 LCD屏示例
 |-----------------|
 |			野火Logo		|
 |									|
 |									|
 |									|
 |									|
 |									|
 |									|
 |									|
 |									|
 |-----------------|
 屏幕正面（宽240，高320）

 *******************************************************/
void ST7796_GramScan(uint8_t ucOption) {
    //参数检查，只可输入0-7
    if (ucOption > 7) return;
    //根据模式更新LCD_SCAN_MODE的值，主要用于触摸屏选择计算参数
    LCD_SCAN_MODE = ucOption;

    //根据模式更新XY方向的像素宽度
    if (ucOption % 2 == 0) {
        // 0 2 4 6模式下X方向像素宽度为240，Y方向为320
        LCD_X_LENGTH = ST7796_LESS_PIXEL;
        LCD_Y_LENGTH = ST7796_MORE_PIXEL;
    } else {
        // 1 3 5 7模式下X方向像素宽度为320，Y方向为240
        LCD_X_LENGTH = ST7796_MORE_PIXEL;
        LCD_Y_LENGTH = ST7796_LESS_PIXEL;
    }

    // 0x36命令参数的高3位可用于设置GRAM扫描方向

    ST7796_Write_Cmd(0x36);

    ST7796_Write_Data(0x08 | (ucOption << 5));  //根据ucOption的值设置LCD参数，共0-7种模式

    ST7796_Write_Cmd(CMD_SetCoordinateX);
    ST7796_Write_Data(0x00);                             /* x 起始坐标高8位 */
    ST7796_Write_Data(0x00);                             /* x 起始坐标低8位 */
    ST7796_Write_Data(((LCD_X_LENGTH - 1) >> 8) & 0xFF); /* x 结束坐标高8位 */
    ST7796_Write_Data((LCD_X_LENGTH - 1) & 0xFF);        /* x 结束坐标低8位 */

    ST7796_Write_Cmd(CMD_SetCoordinateY);
    ST7796_Write_Data(0x00);                             /* y 起始坐标高8位 */
    ST7796_Write_Data(0x00);                             /* y 起始坐标低8位 */
    ST7796_Write_Data(((LCD_Y_LENGTH - 1) >> 8) & 0xFF); /* y 结束坐标高8位 */
    ST7796_Write_Data((LCD_Y_LENGTH - 1) & 0xFF);        /* y 结束坐标低8位 */

    /* write gram start */

    ST7796_Write_Cmd(CMD_SetPixel);
}



void ST7796_OpenWindow(uint16_t usX1, uint16_t usY1, uint16_t usX2, uint16_t usY2) {
    ST7796_Write_Cmd(CMD_SetCoordinateX); /* 设置X坐标 */
    ST7796_Write_Data(usX1 >> 8);          /* 先高8位，然后低8位 */
    ST7796_Write_Data(usX1 & 0xff);        /* 设置起始点和结束点*/
    ST7796_Write_Data(usX2 >> 8);
    ST7796_Write_Data(usX2 & 0xff);

    ST7796_Write_Cmd(CMD_SetCoordinateY); /* 设置Y坐标*/
    ST7796_Write_Data(usY1 >> 8);
    ST7796_Write_Data(usY1 & 0xff);
    ST7796_Write_Data(usY2>> 8);
    ST7796_Write_Data(usY2 & 0xff);
}
/*********************end of file*************************/
