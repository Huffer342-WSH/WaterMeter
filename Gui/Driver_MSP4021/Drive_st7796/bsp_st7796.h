#ifndef DRIVER_MSP4021_DRIVE_ST7796_BSP_ST7796_H_
#define DRIVER_MSP4021_DRIVE_ST7796_BSP_ST7796_H_

#include "main.h"
#include "spi.h"

#define ST7796_HSPI hspi2
#define ST7796_SPIINS SPI2
#define ST7796_SET_DC_High() 	*((__IO uint32_t *)&LCD_DC_GPIO_Port->BSRR) = (uint32_t)LCD_DC_Pin
#define ST7796_SET_DC_Low() 	*((__IO uint32_t *)&LCD_DC_GPIO_Port->BRR) = (uint32_t)LCD_DC_Pin

#define ST7796_SET_RST(x) HAL_GPIO_WritePin(LCD_RST_GPIO_Port, LCD_RST_Pin,x)

static __inline void ST7796_SpiTransmitByte(uint8_t byte);
static __inline void ST7796_Write_Cmd(uint8_t cmd);
static __inline void ST7796_Write_Data(uint8_t data);
void ST7796_Delay( __IO uint32_t nCount);
void ST7796_IO_Config(void);

static __inline void ST7796_SpiTransmitByte(uint8_t byte)
{
	*((__IO uint8_t*) &ST7796_HSPI.Instance->DR) = byte;
	while (!__HAL_SPI_GET_FLAG(&ST7796_HSPI, SPI_FLAG_TXE))
	{
	}
}

/**
 * @brief  向ST7796写入命令
 * @param  usCmd :要写入的命令（表寄存器地址）
 * @retval 无
 */
static __inline void ST7796_Write_Cmd(uint8_t cmd)
{
	ST7796_SET_DC_Low();
	ST7796_SpiTransmitByte(cmd);

}

/**
 * @brief  向ST7796写入数据
 * @param  usData :要写入的数据
 * @retval 无
 */
static __inline void ST7796_Write_Data(uint8_t data)
{
	ST7796_SET_DC_High();
	ST7796_SpiTransmitByte(data);

}

#endif /* DRIVER_MSP4021_DRIVE_ST7796_BSP_ST7796_H_ */
