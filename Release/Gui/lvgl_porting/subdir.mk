################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: arm-gnu-toolchain-11.3.rel1
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Gui/lvgl_porting/lv_port_disp.c \
../Gui/lvgl_porting/lv_port_indev.c 

OBJS += \
./Gui/lvgl_porting/lv_port_disp.o \
./Gui/lvgl_porting/lv_port_indev.o 

C_DEPS += \
./Gui/lvgl_porting/lv_port_disp.d \
./Gui/lvgl_porting/lv_port_indev.d 


# Each subdirectory must supply rules for building sources it contributes
Gui/lvgl_porting/%.o Gui/lvgl_porting/%.su: ../Gui/lvgl_porting/%.c Gui/lvgl_porting/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/Third_Party/FatFs/src/drivers -I../Gui -I../Task -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Gui-2f-lvgl_porting

clean-Gui-2f-lvgl_porting:
	-$(RM) ./Gui/lvgl_porting/lv_port_disp.d ./Gui/lvgl_porting/lv_port_disp.o ./Gui/lvgl_porting/lv_port_disp.su ./Gui/lvgl_porting/lv_port_indev.d ./Gui/lvgl_porting/lv_port_indev.o ./Gui/lvgl_porting/lv_port_indev.su

.PHONY: clean-Gui-2f-lvgl_porting

