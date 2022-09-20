################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: arm-gnu-toolchain-11.3.rel1
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Task/Task_Air724.c \
../Task/Task_Exti.c \
../Task/Task_Screen.c 

OBJS += \
./Task/Task_Air724.o \
./Task/Task_Exti.o \
./Task/Task_Screen.o 

C_DEPS += \
./Task/Task_Air724.d \
./Task/Task_Exti.d \
./Task/Task_Screen.d 


# Each subdirectory must supply rules for building sources it contributes
Task/%.o Task/%.su: ../Task/%.c Task/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/Third_Party/FatFs/src/drivers -I../Gui -I../Task -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Task

clean-Task:
	-$(RM) ./Task/Task_Air724.d ./Task/Task_Air724.o ./Task/Task_Air724.su ./Task/Task_Exti.d ./Task/Task_Exti.o ./Task/Task_Exti.su ./Task/Task_Screen.d ./Task/Task_Screen.o ./Task/Task_Screen.su

.PHONY: clean-Task

