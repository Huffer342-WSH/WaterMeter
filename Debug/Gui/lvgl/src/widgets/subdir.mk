################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: arm-gnu-toolchain-11.3.rel1
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Gui/lvgl/src/widgets/lv_arc.c \
../Gui/lvgl/src/widgets/lv_bar.c \
../Gui/lvgl/src/widgets/lv_btn.c \
../Gui/lvgl/src/widgets/lv_btnmatrix.c \
../Gui/lvgl/src/widgets/lv_canvas.c \
../Gui/lvgl/src/widgets/lv_checkbox.c \
../Gui/lvgl/src/widgets/lv_dropdown.c \
../Gui/lvgl/src/widgets/lv_img.c \
../Gui/lvgl/src/widgets/lv_label.c \
../Gui/lvgl/src/widgets/lv_line.c \
../Gui/lvgl/src/widgets/lv_objx_templ.c \
../Gui/lvgl/src/widgets/lv_roller.c \
../Gui/lvgl/src/widgets/lv_slider.c \
../Gui/lvgl/src/widgets/lv_switch.c \
../Gui/lvgl/src/widgets/lv_table.c \
../Gui/lvgl/src/widgets/lv_textarea.c 

OBJS += \
./Gui/lvgl/src/widgets/lv_arc.o \
./Gui/lvgl/src/widgets/lv_bar.o \
./Gui/lvgl/src/widgets/lv_btn.o \
./Gui/lvgl/src/widgets/lv_btnmatrix.o \
./Gui/lvgl/src/widgets/lv_canvas.o \
./Gui/lvgl/src/widgets/lv_checkbox.o \
./Gui/lvgl/src/widgets/lv_dropdown.o \
./Gui/lvgl/src/widgets/lv_img.o \
./Gui/lvgl/src/widgets/lv_label.o \
./Gui/lvgl/src/widgets/lv_line.o \
./Gui/lvgl/src/widgets/lv_objx_templ.o \
./Gui/lvgl/src/widgets/lv_roller.o \
./Gui/lvgl/src/widgets/lv_slider.o \
./Gui/lvgl/src/widgets/lv_switch.o \
./Gui/lvgl/src/widgets/lv_table.o \
./Gui/lvgl/src/widgets/lv_textarea.o 

C_DEPS += \
./Gui/lvgl/src/widgets/lv_arc.d \
./Gui/lvgl/src/widgets/lv_bar.d \
./Gui/lvgl/src/widgets/lv_btn.d \
./Gui/lvgl/src/widgets/lv_btnmatrix.d \
./Gui/lvgl/src/widgets/lv_canvas.d \
./Gui/lvgl/src/widgets/lv_checkbox.d \
./Gui/lvgl/src/widgets/lv_dropdown.d \
./Gui/lvgl/src/widgets/lv_img.d \
./Gui/lvgl/src/widgets/lv_label.d \
./Gui/lvgl/src/widgets/lv_line.d \
./Gui/lvgl/src/widgets/lv_objx_templ.d \
./Gui/lvgl/src/widgets/lv_roller.d \
./Gui/lvgl/src/widgets/lv_slider.d \
./Gui/lvgl/src/widgets/lv_switch.d \
./Gui/lvgl/src/widgets/lv_table.d \
./Gui/lvgl/src/widgets/lv_textarea.d 


# Each subdirectory must supply rules for building sources it contributes
Gui/lvgl/src/widgets/%.o Gui/lvgl/src/widgets/%.su: ../Gui/lvgl/src/widgets/%.c Gui/lvgl/src/widgets/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/Third_Party/FatFs/src/drivers -I../Gui -I../Task -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Gui-2f-lvgl-2f-src-2f-widgets

clean-Gui-2f-lvgl-2f-src-2f-widgets:
	-$(RM) ./Gui/lvgl/src/widgets/lv_arc.d ./Gui/lvgl/src/widgets/lv_arc.o ./Gui/lvgl/src/widgets/lv_arc.su ./Gui/lvgl/src/widgets/lv_bar.d ./Gui/lvgl/src/widgets/lv_bar.o ./Gui/lvgl/src/widgets/lv_bar.su ./Gui/lvgl/src/widgets/lv_btn.d ./Gui/lvgl/src/widgets/lv_btn.o ./Gui/lvgl/src/widgets/lv_btn.su ./Gui/lvgl/src/widgets/lv_btnmatrix.d ./Gui/lvgl/src/widgets/lv_btnmatrix.o ./Gui/lvgl/src/widgets/lv_btnmatrix.su ./Gui/lvgl/src/widgets/lv_canvas.d ./Gui/lvgl/src/widgets/lv_canvas.o ./Gui/lvgl/src/widgets/lv_canvas.su ./Gui/lvgl/src/widgets/lv_checkbox.d ./Gui/lvgl/src/widgets/lv_checkbox.o ./Gui/lvgl/src/widgets/lv_checkbox.su ./Gui/lvgl/src/widgets/lv_dropdown.d ./Gui/lvgl/src/widgets/lv_dropdown.o ./Gui/lvgl/src/widgets/lv_dropdown.su ./Gui/lvgl/src/widgets/lv_img.d ./Gui/lvgl/src/widgets/lv_img.o ./Gui/lvgl/src/widgets/lv_img.su ./Gui/lvgl/src/widgets/lv_label.d ./Gui/lvgl/src/widgets/lv_label.o ./Gui/lvgl/src/widgets/lv_label.su ./Gui/lvgl/src/widgets/lv_line.d ./Gui/lvgl/src/widgets/lv_line.o ./Gui/lvgl/src/widgets/lv_line.su ./Gui/lvgl/src/widgets/lv_objx_templ.d ./Gui/lvgl/src/widgets/lv_objx_templ.o ./Gui/lvgl/src/widgets/lv_objx_templ.su ./Gui/lvgl/src/widgets/lv_roller.d ./Gui/lvgl/src/widgets/lv_roller.o ./Gui/lvgl/src/widgets/lv_roller.su ./Gui/lvgl/src/widgets/lv_slider.d ./Gui/lvgl/src/widgets/lv_slider.o ./Gui/lvgl/src/widgets/lv_slider.su ./Gui/lvgl/src/widgets/lv_switch.d ./Gui/lvgl/src/widgets/lv_switch.o ./Gui/lvgl/src/widgets/lv_switch.su ./Gui/lvgl/src/widgets/lv_table.d ./Gui/lvgl/src/widgets/lv_table.o ./Gui/lvgl/src/widgets/lv_table.su ./Gui/lvgl/src/widgets/lv_textarea.d ./Gui/lvgl/src/widgets/lv_textarea.o ./Gui/lvgl/src/widgets/lv_textarea.su

.PHONY: clean-Gui-2f-lvgl-2f-src-2f-widgets

