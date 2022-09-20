#ifndef DRIVER_MSP3520_DRIVE_ILI9488_MSP_ILI9488_H_
#define DRIVER_MSP3520_DRIVE_ILI9488_MSP_ILI9488_H_

#include "main.h"
#include "spi.h"

#define ILI9488_HSPI hspi2
#define ILI9488_SPIINS SPI2
#define ILI9488_SET_DC(x) 	HAL_GPIO_WritePin(LCD_DC_GPIO_Port, LCD_DC_Pin,x)
#define ILI9488_SET_RST(x) HAL_GPIO_WritePin(LCD_RST_GPIO_Port, LCD_RST_Pin,x)
static __inline void ILI9488_Write_Cmd(uint8_t cmd);
static __inline void ILI9488_Write_Data(uint8_t data);
void ILI9488_Delay( __IO uint32_t nCount);
void ILI9488_IO_Config(void);

/**
 * @brief  向ILI9488写入命令
 * @param  usCmd :要写入的命令（表寄存器地址）
 * @retval 无
 */
static __inline void ILI9488_Write_Cmd(uint8_t cmd)
{
	ILI9488_SET_DC(0);
	HAL_SPI_Transmit(&hspi2, &cmd, 1, HAL_MAX_DELAY);
//	while (!__HAL_SPI_GET_FLAG(&hspi2, SPI_FLAG_TXE))
//	{
//	}
//	ILI9488_SPIINS->DR = cmd;
}

/**
 * @brief  向ILI9488写入数据
 * @param  usData :要写入的数据
 * @retval 无
 */
static __inline void ILI9488_Write_Data(uint8_t data)
{
	ILI9488_SET_DC(1);
//	while (!__HAL_SPI_GET_FLAG(&hspi2, SPI_FLAG_TXE))
//	{
//	}
//	ILI9488_SPIINS->DR = data;
	HAL_SPI_Transmit(&hspi2, &data, 1, HAL_MAX_DELAY);

}

#endif /* DRIVER_MSP3520_DRIVE_ILI9488_MSP_ILI9488_H_ */
