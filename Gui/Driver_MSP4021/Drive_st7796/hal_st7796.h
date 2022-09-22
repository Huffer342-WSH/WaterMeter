#ifndef      __BSP_ST7796_LCD_H
#define	     __BSP_ST7796_LCD_H

#include <Driver_MSP4021/Drive_st7796/bsp_st7796.h>
#include "main.h"

/***************************** ILI934 显示区域的起始坐标和总行列数 ***************************/
#define      ST7796_DispWindow_X_Star		    0     //起始点的X坐标
#define      ST7796_DispWindow_Y_Star		    0     //起始点的Y坐标

#define 			ST7796_LESS_PIXEL	  							320			//液晶屏较短方向的像素宽度
#define 			ST7796_MORE_PIXEL	 								480			//液晶屏较长方向的像素宽度

//根据液晶扫描方向而变化的XY像素宽度
//调用ST7796_GramScan函数设置方向时会自动更改
extern uint16_t LCD_X_LENGTH, LCD_Y_LENGTH;

//液晶屏扫描模式
//参数可选值为0-7
extern uint8_t LCD_SCAN_MODE;

/******************************* 定义 ILI934 常用命令 ********************************/
#define      CMD_SetCoordinateX		 		    0x2A	     //设置X坐标
#define      CMD_SetCoordinateY		 		    0x2B	     //设置Y坐标
#define      CMD_SetPixel		 		        0x2C	     //填充像素


/********************************** 声明 ILI934 函数 ***************************************/
void ST7796_Init(void);
void ST7796_Rst(void);
void ST7796_GramScan(uint8_t ucOtion);
void ST7796_OpenWindow(uint16_t usX1, uint16_t usY1, uint16_t usX2, uint16_t usY2);

#endif /* __BSP_ST7796_ST7796_H */

