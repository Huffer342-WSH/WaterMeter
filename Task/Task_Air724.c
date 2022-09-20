/*
 * Task_Air724.c
 *
 *  Created on: 2022年9月20日
 *      Author: Huffer
 */

#include "Task_Air724.h"

#include "FreeRTOS.h"
#include "task.h"
#include "cmsis_os.h"

void TaskFunc_Air724Rx(void *argument)
{
	vTaskDelete(NULL);
	for (;;)
	{
		osDelay(1000);
	}
}
void TaskFunc_Air724Tx(void *argument)
{
	vTaskDelete(NULL);
	for (;;)
	{
		osDelay(1000);

	}
}
