/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : freertos.c
  * Description        : Code for freertos applications
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "stdio.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
typedef StaticTask_t osStaticThreadDef_t;
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */

/* USER CODE END Variables */
/* Definitions for defaultTask */
osThreadId_t defaultTaskHandle;
const osThreadAttr_t defaultTask_attributes = {
  .name = "defaultTask",
  .stack_size = 128 * 4,
  .priority = (osPriority_t) osPriorityNormal,
};
/* Definitions for Task_Exti */
osThreadId_t Task_ExtiHandle;
uint32_t Task_ExtiBuffer[ 128 ];
osStaticThreadDef_t Task_ExtiControlBlock;
const osThreadAttr_t Task_Exti_attributes = {
  .name = "Task_Exti",
  .cb_mem = &Task_ExtiControlBlock,
  .cb_size = sizeof(Task_ExtiControlBlock),
  .stack_mem = &Task_ExtiBuffer[0],
  .stack_size = sizeof(Task_ExtiBuffer),
  .priority = (osPriority_t) osPriorityLow,
};
/* Definitions for Task_Screen */
osThreadId_t Task_ScreenHandle;
uint32_t Task_ScreenBuffer[ 2048 ];
osStaticThreadDef_t Task_ScreenControlBlock;
const osThreadAttr_t Task_Screen_attributes = {
  .name = "Task_Screen",
  .cb_mem = &Task_ScreenControlBlock,
  .cb_size = sizeof(Task_ScreenControlBlock),
  .stack_mem = &Task_ScreenBuffer[0],
  .stack_size = sizeof(Task_ScreenBuffer),
  .priority = (osPriority_t) osPriorityHigh,
};
/* Definitions for Task_Air724Rx */
osThreadId_t Task_Air724RxHandle;
uint32_t Task_Air724RxBuffer[ 128 ];
osStaticThreadDef_t Task_Air724RxControlBlock;
const osThreadAttr_t Task_Air724Rx_attributes = {
  .name = "Task_Air724Rx",
  .cb_mem = &Task_Air724RxControlBlock,
  .cb_size = sizeof(Task_Air724RxControlBlock),
  .stack_mem = &Task_Air724RxBuffer[0],
  .stack_size = sizeof(Task_Air724RxBuffer),
  .priority = (osPriority_t) osPriorityLow,
};
/* Definitions for Task_Air724Tx */
osThreadId_t Task_Air724TxHandle;
uint32_t Task_Air724TxBuffer[ 128 ];
osStaticThreadDef_t Task_Air724TxControlBlock;
const osThreadAttr_t Task_Air724Tx_attributes = {
  .name = "Task_Air724Tx",
  .cb_mem = &Task_Air724TxControlBlock,
  .cb_size = sizeof(Task_Air724TxControlBlock),
  .stack_mem = &Task_Air724TxBuffer[0],
  .stack_size = sizeof(Task_Air724TxBuffer),
  .priority = (osPriority_t) osPriorityLow,
};

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */

/* USER CODE END FunctionPrototypes */

void StartDefaultTask(void *argument);
extern void TaskFunc_Exti(void *argument);
extern void TaskFunc_Screen(void *argument);
extern void TaskFunc_Air724Rx(void *argument);
extern void TaskFunc_Air724Tx(void *argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* creation of defaultTask */
  defaultTaskHandle = osThreadNew(StartDefaultTask, NULL, &defaultTask_attributes);

  /* creation of Task_Exti */
  Task_ExtiHandle = osThreadNew(TaskFunc_Exti, NULL, &Task_Exti_attributes);

  /* creation of Task_Screen */
  Task_ScreenHandle = osThreadNew(TaskFunc_Screen, NULL, &Task_Screen_attributes);

  /* creation of Task_Air724Rx */
  Task_Air724RxHandle = osThreadNew(TaskFunc_Air724Rx, NULL, &Task_Air724Rx_attributes);

  /* creation of Task_Air724Tx */
  Task_Air724TxHandle = osThreadNew(TaskFunc_Air724Tx, NULL, &Task_Air724Tx_attributes);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* USER CODE BEGIN RTOS_EVENTS */
  /* add events, ... */
  /* USER CODE END RTOS_EVENTS */

}

/* USER CODE BEGIN Header_StartDefaultTask */
/**
  * @brief  Function implementing the defaultTask thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_StartDefaultTask */
void StartDefaultTask(void *argument)
{
  /* USER CODE BEGIN StartDefaultTask */
  /* Infinite loop */
	printf("StartDefaultTask begin.\n");
  for(;;)
  {
    osDelay(500);

  }
  /* USER CODE END StartDefaultTask */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */

