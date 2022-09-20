/*
 * Task_Exti.h
 *
 *  Created on: Sep 19, 2022
 *      Author: Huffer
 */

#ifndef TASK_EXTI_H_
#define TASK_EXTI_H_

#include "main.h"

typedef struct {
    int32_t pulseLimit;
    int32_t pulseCnt;
    int32_t pulseCnt_prev;
    int32_t pulseFreq;
    uint32_t tick_prev;

    char phoneNumber[12];
    char userName[20];
} WaterMeter_t;

extern WaterMeter_t WaterMeterList[16];

void WaterMeter_Clear(WaterMeter_t* wm);
void WaterMeter_Calculate(WaterMeter_t* wm, uint32_t tick);
#endif /* TASK_EXTI_H_ */
