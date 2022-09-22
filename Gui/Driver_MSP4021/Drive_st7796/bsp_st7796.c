#include <Driver_MSP4021/Drive_st7796/bsp_st7796.h>
#include "FreeRTOS.h"
#include "task.h"
#include "cmsis_os.h"

extern SPI_HandleTypeDef hspi2;

/**
 * @brief  用于 ST7796 简单延时函数
 * @param  nCount ：延时计数值
 * @retval 无
 */
void ST7796_Delay( __IO uint32_t nCount)
{
	osDelay(nCount);
}

/**
 * @brief  ST7796 软件复位
 * @param  无
 * @retval 无
 */
void ST7796_Rst(void)
{
	ST7796_SET_RST(0);	 //低电平复位
	ST7796_Delay(100);
	ST7796_SET_RST(1);
	ST7796_Delay(100);
}


void ST7796_IO_Config(void)
{
	SPI_HandleTypeDef hspi2;
	hspi2.Instance = SPI2;
	hspi2.Init.Mode = SPI_MODE_MASTER;
	hspi2.Init.Direction = SPI_DIRECTION_2LINES;
	hspi2.Init.DataSize = SPI_DATASIZE_8BIT;
	hspi2.Init.CLKPolarity = SPI_POLARITY_LOW;
	hspi2.Init.CLKPhase = SPI_PHASE_1EDGE;
	hspi2.Init.NSS = SPI_NSS_HARD_OUTPUT;
	hspi2.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_2;
	hspi2.Init.FirstBit = SPI_FIRSTBIT_MSB;
	hspi2.Init.TIMode = SPI_TIMODE_DISABLE;
	hspi2.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLE;
	hspi2.Init.CRCPolynomial = 10;
	if (HAL_SPI_Init(&hspi2) != HAL_OK)
	{
		Error_Handler();
	}
}


