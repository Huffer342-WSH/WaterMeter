################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: arm-gnu-toolchain-11.3.rel1
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Gui/lvgl_app/ui.c \
../Gui/lvgl_app/ui_events.c \
../Gui/lvgl_app/ui_font_Font1.c \
../Gui/lvgl_app/ui_helpers.c 

OBJS += \
./Gui/lvgl_app/ui.o \
./Gui/lvgl_app/ui_events.o \
./Gui/lvgl_app/ui_font_Font1.o \
./Gui/lvgl_app/ui_helpers.o 

C_DEPS += \
./Gui/lvgl_app/ui.d \
./Gui/lvgl_app/ui_events.d \
./Gui/lvgl_app/ui_font_Font1.d \
./Gui/lvgl_app/ui_helpers.d 


# Each subdirectory must supply rules for building sources it contributes
Gui/lvgl_app/%.o Gui/lvgl_app/%.su: ../Gui/lvgl_app/%.c Gui/lvgl_app/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/Third_Party/FatFs/src/drivers -I../Gui -I../Task -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Gui-2f-lvgl_app

clean-Gui-2f-lvgl_app:
	-$(RM) ./Gui/lvgl_app/ui.d ./Gui/lvgl_app/ui.o ./Gui/lvgl_app/ui.su ./Gui/lvgl_app/ui_events.d ./Gui/lvgl_app/ui_events.o ./Gui/lvgl_app/ui_events.su ./Gui/lvgl_app/ui_font_Font1.d ./Gui/lvgl_app/ui_font_Font1.o ./Gui/lvgl_app/ui_font_Font1.su ./Gui/lvgl_app/ui_helpers.d ./Gui/lvgl_app/ui_helpers.o ./Gui/lvgl_app/ui_helpers.su

.PHONY: clean-Gui-2f-lvgl_app

