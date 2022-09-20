/*
 * Task_Screen.c
 *
 *  Created on: Sep 19, 2022
 *      Author: Huffer
 */

#include "Task_Screen.h"

#include "FreeRTOS.h"
#include "task.h"
#include "cmsis_os.h"

#include "lvgl_porting/lv_port_disp.h"
#include "lvgl_porting/lv_port_indev.h"
#include "lvgl_app/ui.h"
#include "lvgl_app/ui_helpers.h"

extern osThreadId_t Task_ScreenHandle;

void TaskFunc_Screen(void *argument)
{
	lv_init();
	lv_port_disp_init();
	lv_port_indev_init();
	ui_init();

	for (;;)
	{
		for (uint8_t i = 0; i < 4; i++)
		{
			refreshUserBlock(&uiList_UserBlock[i]);
		}
		lv_timer_handler();
		osDelay(20);
	}

}
