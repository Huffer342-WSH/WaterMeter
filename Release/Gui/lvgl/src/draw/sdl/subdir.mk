################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: arm-gnu-toolchain-11.3.rel1
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Gui/lvgl/src/draw/sdl/lv_draw_sdl.c \
../Gui/lvgl/src/draw/sdl/lv_draw_sdl_arc.c \
../Gui/lvgl/src/draw/sdl/lv_draw_sdl_bg.c \
../Gui/lvgl/src/draw/sdl/lv_draw_sdl_composite.c \
../Gui/lvgl/src/draw/sdl/lv_draw_sdl_img.c \
../Gui/lvgl/src/draw/sdl/lv_draw_sdl_label.c \
../Gui/lvgl/src/draw/sdl/lv_draw_sdl_layer.c \
../Gui/lvgl/src/draw/sdl/lv_draw_sdl_line.c \
../Gui/lvgl/src/draw/sdl/lv_draw_sdl_mask.c \
../Gui/lvgl/src/draw/sdl/lv_draw_sdl_polygon.c \
../Gui/lvgl/src/draw/sdl/lv_draw_sdl_rect.c \
../Gui/lvgl/src/draw/sdl/lv_draw_sdl_stack_blur.c \
../Gui/lvgl/src/draw/sdl/lv_draw_sdl_texture_cache.c \
../Gui/lvgl/src/draw/sdl/lv_draw_sdl_utils.c 

OBJS += \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl.o \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_arc.o \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_bg.o \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_composite.o \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_img.o \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_label.o \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_layer.o \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_line.o \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_mask.o \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_polygon.o \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_rect.o \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_stack_blur.o \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_texture_cache.o \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_utils.o 

C_DEPS += \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl.d \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_arc.d \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_bg.d \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_composite.d \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_img.d \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_label.d \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_layer.d \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_line.d \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_mask.d \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_polygon.d \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_rect.d \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_stack_blur.d \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_texture_cache.d \
./Gui/lvgl/src/draw/sdl/lv_draw_sdl_utils.d 


# Each subdirectory must supply rules for building sources it contributes
Gui/lvgl/src/draw/sdl/%.o Gui/lvgl/src/draw/sdl/%.su: ../Gui/lvgl/src/draw/sdl/%.c Gui/lvgl/src/draw/sdl/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/Third_Party/FatFs/src/drivers -I../Gui -I../Task -Og -ffunction-sections -fdata-sections -mslow-flash-data -fno-strict-aliasing -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Gui-2f-lvgl-2f-src-2f-draw-2f-sdl

clean-Gui-2f-lvgl-2f-src-2f-draw-2f-sdl:
	-$(RM) ./Gui/lvgl/src/draw/sdl/lv_draw_sdl.d ./Gui/lvgl/src/draw/sdl/lv_draw_sdl.o ./Gui/lvgl/src/draw/sdl/lv_draw_sdl.su ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_arc.d ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_arc.o ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_arc.su ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_bg.d ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_bg.o ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_bg.su ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_composite.d ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_composite.o ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_composite.su ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_img.d ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_img.o ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_img.su ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_label.d ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_label.o ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_label.su ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_layer.d ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_layer.o ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_layer.su ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_line.d ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_line.o ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_line.su ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_mask.d ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_mask.o ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_mask.su ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_polygon.d ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_polygon.o ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_polygon.su ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_rect.d ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_rect.o ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_rect.su ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_stack_blur.d ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_stack_blur.o ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_stack_blur.su ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_texture_cache.d ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_texture_cache.o ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_texture_cache.su ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_utils.d ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_utils.o ./Gui/lvgl/src/draw/sdl/lv_draw_sdl_utils.su

.PHONY: clean-Gui-2f-lvgl-2f-src-2f-draw-2f-sdl

