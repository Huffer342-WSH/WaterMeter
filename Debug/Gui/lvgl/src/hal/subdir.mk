################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: arm-gnu-toolchain-11.3.rel1
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Gui/lvgl/src/hal/lv_hal_disp.c \
../Gui/lvgl/src/hal/lv_hal_indev.c \
../Gui/lvgl/src/hal/lv_hal_tick.c 

OBJS += \
./Gui/lvgl/src/hal/lv_hal_disp.o \
./Gui/lvgl/src/hal/lv_hal_indev.o \
./Gui/lvgl/src/hal/lv_hal_tick.o 

C_DEPS += \
./Gui/lvgl/src/hal/lv_hal_disp.d \
./Gui/lvgl/src/hal/lv_hal_indev.d \
./Gui/lvgl/src/hal/lv_hal_tick.d 


# Each subdirectory must supply rules for building sources it contributes
Gui/lvgl/src/hal/%.o Gui/lvgl/src/hal/%.su: ../Gui/lvgl/src/hal/%.c Gui/lvgl/src/hal/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/Third_Party/FatFs/src/drivers -I../Gui -I../Task -Ofast -ffunction-sections -fdata-sections -mslow-flash-data -fno-strict-aliasing -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Gui-2f-lvgl-2f-src-2f-hal

clean-Gui-2f-lvgl-2f-src-2f-hal:
	-$(RM) ./Gui/lvgl/src/hal/lv_hal_disp.d ./Gui/lvgl/src/hal/lv_hal_disp.o ./Gui/lvgl/src/hal/lv_hal_disp.su ./Gui/lvgl/src/hal/lv_hal_indev.d ./Gui/lvgl/src/hal/lv_hal_indev.o ./Gui/lvgl/src/hal/lv_hal_indev.su ./Gui/lvgl/src/hal/lv_hal_tick.d ./Gui/lvgl/src/hal/lv_hal_tick.o ./Gui/lvgl/src/hal/lv_hal_tick.su

.PHONY: clean-Gui-2f-lvgl-2f-src-2f-hal

