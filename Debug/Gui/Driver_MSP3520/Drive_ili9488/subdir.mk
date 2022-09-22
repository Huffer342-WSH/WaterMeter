################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: arm-gnu-toolchain-11.3.rel1
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Gui/Driver_MSP3520/Drive_ili9488/hal_Ili9488.c \
../Gui/Driver_MSP3520/Drive_ili9488/msp_ili9488.c 

OBJS += \
./Gui/Driver_MSP3520/Drive_ili9488/hal_Ili9488.o \
./Gui/Driver_MSP3520/Drive_ili9488/msp_ili9488.o 

C_DEPS += \
./Gui/Driver_MSP3520/Drive_ili9488/hal_Ili9488.d \
./Gui/Driver_MSP3520/Drive_ili9488/msp_ili9488.d 


# Each subdirectory must supply rules for building sources it contributes
Gui/Driver_MSP3520/Drive_ili9488/%.o Gui/Driver_MSP3520/Drive_ili9488/%.su: ../Gui/Driver_MSP3520/Drive_ili9488/%.c Gui/Driver_MSP3520/Drive_ili9488/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/Third_Party/FatFs/src/drivers -I../Gui -I../Task -Og -ffunction-sections -fdata-sections -mslow-flash-data -fno-strict-aliasing -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Gui-2f-Driver_MSP3520-2f-Drive_ili9488

clean-Gui-2f-Driver_MSP3520-2f-Drive_ili9488:
	-$(RM) ./Gui/Driver_MSP3520/Drive_ili9488/hal_Ili9488.d ./Gui/Driver_MSP3520/Drive_ili9488/hal_Ili9488.o ./Gui/Driver_MSP3520/Drive_ili9488/hal_Ili9488.su ./Gui/Driver_MSP3520/Drive_ili9488/msp_ili9488.d ./Gui/Driver_MSP3520/Drive_ili9488/msp_ili9488.o ./Gui/Driver_MSP3520/Drive_ili9488/msp_ili9488.su

.PHONY: clean-Gui-2f-Driver_MSP3520-2f-Drive_ili9488

