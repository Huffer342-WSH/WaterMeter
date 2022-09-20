#ifndef      __BSP_ILI9488_LCD_H
#define	     __BSP_ILI9488_LCD_H

#include "main.h"
#include <Driver_MSP3520/Drive_ili9488/msp_ili9488.h>

/***************************** ILI934 显示区域的起始坐标和总行列数 ***************************/
#define      ILI9488_DispWindow_X_Star		    0     //起始点的X坐标
#define      ILI9488_DispWindow_Y_Star		    0     //起始点的Y坐标

#define 			ILI9488_LESS_PIXEL	  							320			//液晶屏较短方向的像素宽度
#define 			ILI9488_MORE_PIXEL	 								480			//液晶屏较长方向的像素宽度

//根据液晶扫描方向而变化的XY像素宽度
//调用ILI9488_GramScan函数设置方向时会自动更改
extern uint16_t LCD_X_LENGTH, LCD_Y_LENGTH;

//液晶屏扫描模式
//参数可选值为0-7
extern uint8_t LCD_SCAN_MODE;

/******************************* 定义 ILI934 常用命令 ********************************/
#define      CMD_SetCoordinateX		 		    0x2A	     //设置X坐标
#define      CMD_SetCoordinateY		 		    0x2B	     //设置Y坐标
#define      CMD_SetPixel		 		        0x2C	     //填充像素


/********************************** 声明 ILI934 函数 ***************************************/
void ILI9488_Init(void);
void ILI9488_Rst(void);
void ILI9488_GramScan(uint8_t ucOtion);
void ILI9488_OpenWindow(uint16_t usX, uint16_t usY, uint16_t usWidth, uint16_t usHeight);

#endif /* __BSP_ILI9488_ILI9488_H */

