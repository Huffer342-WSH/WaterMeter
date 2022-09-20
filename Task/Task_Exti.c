/*
 * Task_Exti.c
 *
 *  Created on: Sep 19, 2022
 *      Author: Huffer
 */
#include "Task_Exti.h"

#include "FreeRTOS.h"
#include "task.h"
#include "cmsis_os.h"

#include "stdio.h"
#include "string.h"
WaterMeter_t WaterMeterList[16] = {0};

void TaskFunc_Exti(void* argument) {
    uint32_t tick;
    uint16_t count=0;

    for(uint8_t i=0;i<16;i++){
		sprintf(WaterMeterList[i].userName,"User%hu",i);
		WaterMeterList[i].pulseLimit = 1000;
		strcpy(WaterMeterList[i].phoneNumber,"13484107382");
    }
    for (;;) {
        osDelay(50);
        tick = xTaskGetTickCount();
        for (uint8_t i = 0; i < 16; i++) {
            WaterMeter_Calculate(&WaterMeterList[i], tick);
            //            printf("[%hu]Count:%lu\tFreq:%lu\t\n", i, WaterMeterList[i].pulseCnt_prev,
            //                   WaterMeterList[i].pulseFreq);
        }
        if(++count%40==0){
            printf("%lu\n",WaterMeterList[0].pulseCnt);
        }

    }
}

/**
 * @brief  EXTI line detection callbacks.
 * @param  GPIO_Pin: Specifies the pins connec
 * ted EXTI line
 * @retval None
 */
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {
    uint8_t index = 0;
    while (GPIO_Pin > 0x0001) {
        GPIO_Pin >>= 1;
        index++;
    }
    WaterMeterList[0].pulseCnt++;
}

void WaterMeter_Clear(WaterMeter_t* wm) {
    wm->pulseCnt = 0;
    wm->pulseCnt_prev = 0;
    wm->pulseFreq = 0;
}

void WaterMeter_Calculate(WaterMeter_t* wm, uint32_t tick) {
    wm->pulseFreq = 1000 * (wm->pulseCnt - wm->pulseCnt_prev) / (tick - wm->tick_prev);
    wm->pulseCnt_prev = wm->pulseCnt;
    wm->tick_prev = tick;
}

uint32_t WaterMeter_GetCount(WaterMeter_t* wm) { return wm->pulseCnt; }

uint32_t WaterMeter_GetFreq(WaterMeter_t* wm) { return wm->pulseFreq; }
