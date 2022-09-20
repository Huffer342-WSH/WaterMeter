#ifndef __BSP_XPT2046_LCD_H
#define __BSP_XPT2046_LCD_H

#include "main.h"

/******************************* XPT2046 触摸屏参数定义 ***************************/
//校准触摸屏时触摸坐标的AD值相差门限
#define XPT2046_THRESHOLD_CalDiff 2

#define XPT2046_CHANNEL_X 0x90  //通道Y+的选择控制字
#define XPT2046_CHANNEL_Y 0xd0  //通道X+的选择控制字

/******************************* 声明 XPT2046 相关的数据类型 ***************************/

typedef struct  //校准系数结构体（最终使用）
{
    float dX_X, dX_Y, dX, dY_X, dY_Y, dY;

} strType_XPT2046_TouchPara;

/******************************* 声明 XPT2046 相关的外部全局变量 ***************************/
extern strType_XPT2046_TouchPara strXPT2046_TouchPara[];

/******************************** XPT2046 触摸屏函数声明 **********************************/
void XPT2046_Init(void);
uint8_t XPT2046_Get_TouchedPoint(int16_t *posX, int16_t *posY,
                                 strType_XPT2046_TouchPara *pTouchPara, uint8_t scanMode);
uint8_t XPT2046_Is_Pressed();
#endif /* __BSP_TOUCH_H */
