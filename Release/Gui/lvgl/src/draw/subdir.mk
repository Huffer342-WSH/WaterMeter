################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: arm-gnu-toolchain-11.3.rel1
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Gui/lvgl/src/draw/lv_draw.c \
../Gui/lvgl/src/draw/lv_draw_arc.c \
../Gui/lvgl/src/draw/lv_draw_img.c \
../Gui/lvgl/src/draw/lv_draw_label.c \
../Gui/lvgl/src/draw/lv_draw_layer.c \
../Gui/lvgl/src/draw/lv_draw_line.c \
../Gui/lvgl/src/draw/lv_draw_mask.c \
../Gui/lvgl/src/draw/lv_draw_rect.c \
../Gui/lvgl/src/draw/lv_draw_transform.c \
../Gui/lvgl/src/draw/lv_draw_triangle.c \
../Gui/lvgl/src/draw/lv_img_buf.c \
../Gui/lvgl/src/draw/lv_img_cache.c \
../Gui/lvgl/src/draw/lv_img_decoder.c 

OBJS += \
./Gui/lvgl/src/draw/lv_draw.o \
./Gui/lvgl/src/draw/lv_draw_arc.o \
./Gui/lvgl/src/draw/lv_draw_img.o \
./Gui/lvgl/src/draw/lv_draw_label.o \
./Gui/lvgl/src/draw/lv_draw_layer.o \
./Gui/lvgl/src/draw/lv_draw_line.o \
./Gui/lvgl/src/draw/lv_draw_mask.o \
./Gui/lvgl/src/draw/lv_draw_rect.o \
./Gui/lvgl/src/draw/lv_draw_transform.o \
./Gui/lvgl/src/draw/lv_draw_triangle.o \
./Gui/lvgl/src/draw/lv_img_buf.o \
./Gui/lvgl/src/draw/lv_img_cache.o \
./Gui/lvgl/src/draw/lv_img_decoder.o 

C_DEPS += \
./Gui/lvgl/src/draw/lv_draw.d \
./Gui/lvgl/src/draw/lv_draw_arc.d \
./Gui/lvgl/src/draw/lv_draw_img.d \
./Gui/lvgl/src/draw/lv_draw_label.d \
./Gui/lvgl/src/draw/lv_draw_layer.d \
./Gui/lvgl/src/draw/lv_draw_line.d \
./Gui/lvgl/src/draw/lv_draw_mask.d \
./Gui/lvgl/src/draw/lv_draw_rect.d \
./Gui/lvgl/src/draw/lv_draw_transform.d \
./Gui/lvgl/src/draw/lv_draw_triangle.d \
./Gui/lvgl/src/draw/lv_img_buf.d \
./Gui/lvgl/src/draw/lv_img_cache.d \
./Gui/lvgl/src/draw/lv_img_decoder.d 


# Each subdirectory must supply rules for building sources it contributes
Gui/lvgl/src/draw/%.o Gui/lvgl/src/draw/%.su: ../Gui/lvgl/src/draw/%.c Gui/lvgl/src/draw/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/Third_Party/FatFs/src/drivers -I../Gui -I../Task -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Gui-2f-lvgl-2f-src-2f-draw

clean-Gui-2f-lvgl-2f-src-2f-draw:
	-$(RM) ./Gui/lvgl/src/draw/lv_draw.d ./Gui/lvgl/src/draw/lv_draw.o ./Gui/lvgl/src/draw/lv_draw.su ./Gui/lvgl/src/draw/lv_draw_arc.d ./Gui/lvgl/src/draw/lv_draw_arc.o ./Gui/lvgl/src/draw/lv_draw_arc.su ./Gui/lvgl/src/draw/lv_draw_img.d ./Gui/lvgl/src/draw/lv_draw_img.o ./Gui/lvgl/src/draw/lv_draw_img.su ./Gui/lvgl/src/draw/lv_draw_label.d ./Gui/lvgl/src/draw/lv_draw_label.o ./Gui/lvgl/src/draw/lv_draw_label.su ./Gui/lvgl/src/draw/lv_draw_layer.d ./Gui/lvgl/src/draw/lv_draw_layer.o ./Gui/lvgl/src/draw/lv_draw_layer.su ./Gui/lvgl/src/draw/lv_draw_line.d ./Gui/lvgl/src/draw/lv_draw_line.o ./Gui/lvgl/src/draw/lv_draw_line.su ./Gui/lvgl/src/draw/lv_draw_mask.d ./Gui/lvgl/src/draw/lv_draw_mask.o ./Gui/lvgl/src/draw/lv_draw_mask.su ./Gui/lvgl/src/draw/lv_draw_rect.d ./Gui/lvgl/src/draw/lv_draw_rect.o ./Gui/lvgl/src/draw/lv_draw_rect.su ./Gui/lvgl/src/draw/lv_draw_transform.d ./Gui/lvgl/src/draw/lv_draw_transform.o ./Gui/lvgl/src/draw/lv_draw_transform.su ./Gui/lvgl/src/draw/lv_draw_triangle.d ./Gui/lvgl/src/draw/lv_draw_triangle.o ./Gui/lvgl/src/draw/lv_draw_triangle.su ./Gui/lvgl/src/draw/lv_img_buf.d ./Gui/lvgl/src/draw/lv_img_buf.o ./Gui/lvgl/src/draw/lv_img_buf.su ./Gui/lvgl/src/draw/lv_img_cache.d ./Gui/lvgl/src/draw/lv_img_cache.o ./Gui/lvgl/src/draw/lv_img_cache.su ./Gui/lvgl/src/draw/lv_img_decoder.d ./Gui/lvgl/src/draw/lv_img_decoder.o ./Gui/lvgl/src/draw/lv_img_decoder.su

.PHONY: clean-Gui-2f-lvgl-2f-src-2f-draw

