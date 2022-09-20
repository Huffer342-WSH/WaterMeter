#include "msp_xpt2046.h"

/**
 * @brief  XPT2046 初始化函数
 * @param  无
 * @retval 无
 */
void XPT2046_IO_Config(void)
{
	XPT2046_CS_DISABLE();
}

/**
 * @brief  用于 XPT2046 的简单微秒级延时函数
 * @param  nCount ：延时计数值，单位为微妙
 * @retval 无
 */
void XPT2046_DelayUS(__IO uint32_t ulCount)
{

	uint32_t i;
	for (i = 0; i < ulCount; i++)
	{
		uint8_t uc = 12;  //设置值为12，大约延1微秒
		while (uc--)
		;
	}
}

/**
 * @brief  XPT2046 的写入命令
 * @param  ucCmd ：命令
 *   该参数为以下值之一：
 *     @arg 0x90 :通道Y+的选择控制字
 *     @arg 0xd0 :通道X+的选择控制字
 * @retval 无
 */
void XPT2046_WriteCMD(uint8_t ucCmd)
{
	uint8_t i;
	XPT2046_MOSI_0();
	XPT2046_CLK_LOW();
	for (i = 0; i < 8; i++)
	{
		if ((ucCmd >> (7 - i)) & 0x01)
		{
			XPT2046_MOSI_1();
		}
		else
		{
			XPT2046_MOSI_0();
		}
		XPT2046_DelayUS(5);
		XPT2046_CLK_HIGH();
		XPT2046_DelayUS(5);
		XPT2046_CLK_LOW();
	}
}

/**
 * @brief  XPT2046 的读取命令
 * @param  无
 * @retval 读取到的数据
 */
uint16_t XPT2046_ReadCMD(void)
{
	uint8_t i;
	uint16_t usBuf = 0, usTemp;
	XPT2046_MOSI_0();
	XPT2046_CLK_HIGH();
	for (i = 0; i < 12; i++)
	{
		XPT2046_CLK_LOW();
		usTemp = XPT2046_MISO();
		usBuf |= usTemp << (11 - i);
		XPT2046_CLK_HIGH();
	}
	return usBuf;
}


