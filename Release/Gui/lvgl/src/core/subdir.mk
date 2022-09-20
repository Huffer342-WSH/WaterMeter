################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: arm-gnu-toolchain-11.3.rel1
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Gui/lvgl/src/core/lv_disp.c \
../Gui/lvgl/src/core/lv_event.c \
../Gui/lvgl/src/core/lv_group.c \
../Gui/lvgl/src/core/lv_indev.c \
../Gui/lvgl/src/core/lv_indev_scroll.c \
../Gui/lvgl/src/core/lv_obj.c \
../Gui/lvgl/src/core/lv_obj_class.c \
../Gui/lvgl/src/core/lv_obj_draw.c \
../Gui/lvgl/src/core/lv_obj_pos.c \
../Gui/lvgl/src/core/lv_obj_scroll.c \
../Gui/lvgl/src/core/lv_obj_style.c \
../Gui/lvgl/src/core/lv_obj_style_gen.c \
../Gui/lvgl/src/core/lv_obj_tree.c \
../Gui/lvgl/src/core/lv_refr.c \
../Gui/lvgl/src/core/lv_theme.c 

OBJS += \
./Gui/lvgl/src/core/lv_disp.o \
./Gui/lvgl/src/core/lv_event.o \
./Gui/lvgl/src/core/lv_group.o \
./Gui/lvgl/src/core/lv_indev.o \
./Gui/lvgl/src/core/lv_indev_scroll.o \
./Gui/lvgl/src/core/lv_obj.o \
./Gui/lvgl/src/core/lv_obj_class.o \
./Gui/lvgl/src/core/lv_obj_draw.o \
./Gui/lvgl/src/core/lv_obj_pos.o \
./Gui/lvgl/src/core/lv_obj_scroll.o \
./Gui/lvgl/src/core/lv_obj_style.o \
./Gui/lvgl/src/core/lv_obj_style_gen.o \
./Gui/lvgl/src/core/lv_obj_tree.o \
./Gui/lvgl/src/core/lv_refr.o \
./Gui/lvgl/src/core/lv_theme.o 

C_DEPS += \
./Gui/lvgl/src/core/lv_disp.d \
./Gui/lvgl/src/core/lv_event.d \
./Gui/lvgl/src/core/lv_group.d \
./Gui/lvgl/src/core/lv_indev.d \
./Gui/lvgl/src/core/lv_indev_scroll.d \
./Gui/lvgl/src/core/lv_obj.d \
./Gui/lvgl/src/core/lv_obj_class.d \
./Gui/lvgl/src/core/lv_obj_draw.d \
./Gui/lvgl/src/core/lv_obj_pos.d \
./Gui/lvgl/src/core/lv_obj_scroll.d \
./Gui/lvgl/src/core/lv_obj_style.d \
./Gui/lvgl/src/core/lv_obj_style_gen.d \
./Gui/lvgl/src/core/lv_obj_tree.d \
./Gui/lvgl/src/core/lv_refr.d \
./Gui/lvgl/src/core/lv_theme.d 


# Each subdirectory must supply rules for building sources it contributes
Gui/lvgl/src/core/%.o Gui/lvgl/src/core/%.su: ../Gui/lvgl/src/core/%.c Gui/lvgl/src/core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/Third_Party/FatFs/src/drivers -I../Gui -I../Task -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Gui-2f-lvgl-2f-src-2f-core

clean-Gui-2f-lvgl-2f-src-2f-core:
	-$(RM) ./Gui/lvgl/src/core/lv_disp.d ./Gui/lvgl/src/core/lv_disp.o ./Gui/lvgl/src/core/lv_disp.su ./Gui/lvgl/src/core/lv_event.d ./Gui/lvgl/src/core/lv_event.o ./Gui/lvgl/src/core/lv_event.su ./Gui/lvgl/src/core/lv_group.d ./Gui/lvgl/src/core/lv_group.o ./Gui/lvgl/src/core/lv_group.su ./Gui/lvgl/src/core/lv_indev.d ./Gui/lvgl/src/core/lv_indev.o ./Gui/lvgl/src/core/lv_indev.su ./Gui/lvgl/src/core/lv_indev_scroll.d ./Gui/lvgl/src/core/lv_indev_scroll.o ./Gui/lvgl/src/core/lv_indev_scroll.su ./Gui/lvgl/src/core/lv_obj.d ./Gui/lvgl/src/core/lv_obj.o ./Gui/lvgl/src/core/lv_obj.su ./Gui/lvgl/src/core/lv_obj_class.d ./Gui/lvgl/src/core/lv_obj_class.o ./Gui/lvgl/src/core/lv_obj_class.su ./Gui/lvgl/src/core/lv_obj_draw.d ./Gui/lvgl/src/core/lv_obj_draw.o ./Gui/lvgl/src/core/lv_obj_draw.su ./Gui/lvgl/src/core/lv_obj_pos.d ./Gui/lvgl/src/core/lv_obj_pos.o ./Gui/lvgl/src/core/lv_obj_pos.su ./Gui/lvgl/src/core/lv_obj_scroll.d ./Gui/lvgl/src/core/lv_obj_scroll.o ./Gui/lvgl/src/core/lv_obj_scroll.su ./Gui/lvgl/src/core/lv_obj_style.d ./Gui/lvgl/src/core/lv_obj_style.o ./Gui/lvgl/src/core/lv_obj_style.su ./Gui/lvgl/src/core/lv_obj_style_gen.d ./Gui/lvgl/src/core/lv_obj_style_gen.o ./Gui/lvgl/src/core/lv_obj_style_gen.su ./Gui/lvgl/src/core/lv_obj_tree.d ./Gui/lvgl/src/core/lv_obj_tree.o ./Gui/lvgl/src/core/lv_obj_tree.su ./Gui/lvgl/src/core/lv_refr.d ./Gui/lvgl/src/core/lv_refr.o ./Gui/lvgl/src/core/lv_refr.su ./Gui/lvgl/src/core/lv_theme.d ./Gui/lvgl/src/core/lv_theme.o ./Gui/lvgl/src/core/lv_theme.su

.PHONY: clean-Gui-2f-lvgl-2f-src-2f-core

