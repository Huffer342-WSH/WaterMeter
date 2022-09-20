################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: arm-gnu-toolchain-11.3.rel1
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Gui/lvgl/src/draw/sw/lv_draw_sw.c \
../Gui/lvgl/src/draw/sw/lv_draw_sw_arc.c \
../Gui/lvgl/src/draw/sw/lv_draw_sw_blend.c \
../Gui/lvgl/src/draw/sw/lv_draw_sw_dither.c \
../Gui/lvgl/src/draw/sw/lv_draw_sw_gradient.c \
../Gui/lvgl/src/draw/sw/lv_draw_sw_img.c \
../Gui/lvgl/src/draw/sw/lv_draw_sw_layer.c \
../Gui/lvgl/src/draw/sw/lv_draw_sw_letter.c \
../Gui/lvgl/src/draw/sw/lv_draw_sw_line.c \
../Gui/lvgl/src/draw/sw/lv_draw_sw_polygon.c \
../Gui/lvgl/src/draw/sw/lv_draw_sw_rect.c \
../Gui/lvgl/src/draw/sw/lv_draw_sw_transform.c 

OBJS += \
./Gui/lvgl/src/draw/sw/lv_draw_sw.o \
./Gui/lvgl/src/draw/sw/lv_draw_sw_arc.o \
./Gui/lvgl/src/draw/sw/lv_draw_sw_blend.o \
./Gui/lvgl/src/draw/sw/lv_draw_sw_dither.o \
./Gui/lvgl/src/draw/sw/lv_draw_sw_gradient.o \
./Gui/lvgl/src/draw/sw/lv_draw_sw_img.o \
./Gui/lvgl/src/draw/sw/lv_draw_sw_layer.o \
./Gui/lvgl/src/draw/sw/lv_draw_sw_letter.o \
./Gui/lvgl/src/draw/sw/lv_draw_sw_line.o \
./Gui/lvgl/src/draw/sw/lv_draw_sw_polygon.o \
./Gui/lvgl/src/draw/sw/lv_draw_sw_rect.o \
./Gui/lvgl/src/draw/sw/lv_draw_sw_transform.o 

C_DEPS += \
./Gui/lvgl/src/draw/sw/lv_draw_sw.d \
./Gui/lvgl/src/draw/sw/lv_draw_sw_arc.d \
./Gui/lvgl/src/draw/sw/lv_draw_sw_blend.d \
./Gui/lvgl/src/draw/sw/lv_draw_sw_dither.d \
./Gui/lvgl/src/draw/sw/lv_draw_sw_gradient.d \
./Gui/lvgl/src/draw/sw/lv_draw_sw_img.d \
./Gui/lvgl/src/draw/sw/lv_draw_sw_layer.d \
./Gui/lvgl/src/draw/sw/lv_draw_sw_letter.d \
./Gui/lvgl/src/draw/sw/lv_draw_sw_line.d \
./Gui/lvgl/src/draw/sw/lv_draw_sw_polygon.d \
./Gui/lvgl/src/draw/sw/lv_draw_sw_rect.d \
./Gui/lvgl/src/draw/sw/lv_draw_sw_transform.d 


# Each subdirectory must supply rules for building sources it contributes
Gui/lvgl/src/draw/sw/%.o Gui/lvgl/src/draw/sw/%.su: ../Gui/lvgl/src/draw/sw/%.c Gui/lvgl/src/draw/sw/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/Third_Party/FatFs/src/drivers -I../Gui -I../Task -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Gui-2f-lvgl-2f-src-2f-draw-2f-sw

clean-Gui-2f-lvgl-2f-src-2f-draw-2f-sw:
	-$(RM) ./Gui/lvgl/src/draw/sw/lv_draw_sw.d ./Gui/lvgl/src/draw/sw/lv_draw_sw.o ./Gui/lvgl/src/draw/sw/lv_draw_sw.su ./Gui/lvgl/src/draw/sw/lv_draw_sw_arc.d ./Gui/lvgl/src/draw/sw/lv_draw_sw_arc.o ./Gui/lvgl/src/draw/sw/lv_draw_sw_arc.su ./Gui/lvgl/src/draw/sw/lv_draw_sw_blend.d ./Gui/lvgl/src/draw/sw/lv_draw_sw_blend.o ./Gui/lvgl/src/draw/sw/lv_draw_sw_blend.su ./Gui/lvgl/src/draw/sw/lv_draw_sw_dither.d ./Gui/lvgl/src/draw/sw/lv_draw_sw_dither.o ./Gui/lvgl/src/draw/sw/lv_draw_sw_dither.su ./Gui/lvgl/src/draw/sw/lv_draw_sw_gradient.d ./Gui/lvgl/src/draw/sw/lv_draw_sw_gradient.o ./Gui/lvgl/src/draw/sw/lv_draw_sw_gradient.su ./Gui/lvgl/src/draw/sw/lv_draw_sw_img.d ./Gui/lvgl/src/draw/sw/lv_draw_sw_img.o ./Gui/lvgl/src/draw/sw/lv_draw_sw_img.su ./Gui/lvgl/src/draw/sw/lv_draw_sw_layer.d ./Gui/lvgl/src/draw/sw/lv_draw_sw_layer.o ./Gui/lvgl/src/draw/sw/lv_draw_sw_layer.su ./Gui/lvgl/src/draw/sw/lv_draw_sw_letter.d ./Gui/lvgl/src/draw/sw/lv_draw_sw_letter.o ./Gui/lvgl/src/draw/sw/lv_draw_sw_letter.su ./Gui/lvgl/src/draw/sw/lv_draw_sw_line.d ./Gui/lvgl/src/draw/sw/lv_draw_sw_line.o ./Gui/lvgl/src/draw/sw/lv_draw_sw_line.su ./Gui/lvgl/src/draw/sw/lv_draw_sw_polygon.d ./Gui/lvgl/src/draw/sw/lv_draw_sw_polygon.o ./Gui/lvgl/src/draw/sw/lv_draw_sw_polygon.su ./Gui/lvgl/src/draw/sw/lv_draw_sw_rect.d ./Gui/lvgl/src/draw/sw/lv_draw_sw_rect.o ./Gui/lvgl/src/draw/sw/lv_draw_sw_rect.su ./Gui/lvgl/src/draw/sw/lv_draw_sw_transform.d ./Gui/lvgl/src/draw/sw/lv_draw_sw_transform.o ./Gui/lvgl/src/draw/sw/lv_draw_sw_transform.su

.PHONY: clean-Gui-2f-lvgl-2f-src-2f-draw-2f-sw

