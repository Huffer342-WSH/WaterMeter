################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: arm-gnu-toolchain-11.3.rel1
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Gui/lvgl/src/extra/widgets/tileview/lv_tileview.c 

OBJS += \
./Gui/lvgl/src/extra/widgets/tileview/lv_tileview.o 

C_DEPS += \
./Gui/lvgl/src/extra/widgets/tileview/lv_tileview.d 


# Each subdirectory must supply rules for building sources it contributes
Gui/lvgl/src/extra/widgets/tileview/%.o Gui/lvgl/src/extra/widgets/tileview/%.su: ../Gui/lvgl/src/extra/widgets/tileview/%.c Gui/lvgl/src/extra/widgets/tileview/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/Third_Party/FatFs/src/drivers -I../Gui -I../Task -Og -ffunction-sections -fdata-sections -mslow-flash-data -fno-strict-aliasing -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Gui-2f-lvgl-2f-src-2f-extra-2f-widgets-2f-tileview

clean-Gui-2f-lvgl-2f-src-2f-extra-2f-widgets-2f-tileview:
	-$(RM) ./Gui/lvgl/src/extra/widgets/tileview/lv_tileview.d ./Gui/lvgl/src/extra/widgets/tileview/lv_tileview.o ./Gui/lvgl/src/extra/widgets/tileview/lv_tileview.su

.PHONY: clean-Gui-2f-lvgl-2f-src-2f-extra-2f-widgets-2f-tileview

