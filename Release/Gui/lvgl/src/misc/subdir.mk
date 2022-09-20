################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: arm-gnu-toolchain-11.3.rel1
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Gui/lvgl/src/misc/lv_anim.c \
../Gui/lvgl/src/misc/lv_anim_timeline.c \
../Gui/lvgl/src/misc/lv_area.c \
../Gui/lvgl/src/misc/lv_async.c \
../Gui/lvgl/src/misc/lv_bidi.c \
../Gui/lvgl/src/misc/lv_color.c \
../Gui/lvgl/src/misc/lv_fs.c \
../Gui/lvgl/src/misc/lv_gc.c \
../Gui/lvgl/src/misc/lv_ll.c \
../Gui/lvgl/src/misc/lv_log.c \
../Gui/lvgl/src/misc/lv_lru.c \
../Gui/lvgl/src/misc/lv_math.c \
../Gui/lvgl/src/misc/lv_mem.c \
../Gui/lvgl/src/misc/lv_printf.c \
../Gui/lvgl/src/misc/lv_style.c \
../Gui/lvgl/src/misc/lv_style_gen.c \
../Gui/lvgl/src/misc/lv_templ.c \
../Gui/lvgl/src/misc/lv_timer.c \
../Gui/lvgl/src/misc/lv_tlsf.c \
../Gui/lvgl/src/misc/lv_txt.c \
../Gui/lvgl/src/misc/lv_txt_ap.c \
../Gui/lvgl/src/misc/lv_utils.c 

OBJS += \
./Gui/lvgl/src/misc/lv_anim.o \
./Gui/lvgl/src/misc/lv_anim_timeline.o \
./Gui/lvgl/src/misc/lv_area.o \
./Gui/lvgl/src/misc/lv_async.o \
./Gui/lvgl/src/misc/lv_bidi.o \
./Gui/lvgl/src/misc/lv_color.o \
./Gui/lvgl/src/misc/lv_fs.o \
./Gui/lvgl/src/misc/lv_gc.o \
./Gui/lvgl/src/misc/lv_ll.o \
./Gui/lvgl/src/misc/lv_log.o \
./Gui/lvgl/src/misc/lv_lru.o \
./Gui/lvgl/src/misc/lv_math.o \
./Gui/lvgl/src/misc/lv_mem.o \
./Gui/lvgl/src/misc/lv_printf.o \
./Gui/lvgl/src/misc/lv_style.o \
./Gui/lvgl/src/misc/lv_style_gen.o \
./Gui/lvgl/src/misc/lv_templ.o \
./Gui/lvgl/src/misc/lv_timer.o \
./Gui/lvgl/src/misc/lv_tlsf.o \
./Gui/lvgl/src/misc/lv_txt.o \
./Gui/lvgl/src/misc/lv_txt_ap.o \
./Gui/lvgl/src/misc/lv_utils.o 

C_DEPS += \
./Gui/lvgl/src/misc/lv_anim.d \
./Gui/lvgl/src/misc/lv_anim_timeline.d \
./Gui/lvgl/src/misc/lv_area.d \
./Gui/lvgl/src/misc/lv_async.d \
./Gui/lvgl/src/misc/lv_bidi.d \
./Gui/lvgl/src/misc/lv_color.d \
./Gui/lvgl/src/misc/lv_fs.d \
./Gui/lvgl/src/misc/lv_gc.d \
./Gui/lvgl/src/misc/lv_ll.d \
./Gui/lvgl/src/misc/lv_log.d \
./Gui/lvgl/src/misc/lv_lru.d \
./Gui/lvgl/src/misc/lv_math.d \
./Gui/lvgl/src/misc/lv_mem.d \
./Gui/lvgl/src/misc/lv_printf.d \
./Gui/lvgl/src/misc/lv_style.d \
./Gui/lvgl/src/misc/lv_style_gen.d \
./Gui/lvgl/src/misc/lv_templ.d \
./Gui/lvgl/src/misc/lv_timer.d \
./Gui/lvgl/src/misc/lv_tlsf.d \
./Gui/lvgl/src/misc/lv_txt.d \
./Gui/lvgl/src/misc/lv_txt_ap.d \
./Gui/lvgl/src/misc/lv_utils.d 


# Each subdirectory must supply rules for building sources it contributes
Gui/lvgl/src/misc/%.o Gui/lvgl/src/misc/%.su: ../Gui/lvgl/src/misc/%.c Gui/lvgl/src/misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/Third_Party/FatFs/src/drivers -I../Gui -I../Task -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Gui-2f-lvgl-2f-src-2f-misc

clean-Gui-2f-lvgl-2f-src-2f-misc:
	-$(RM) ./Gui/lvgl/src/misc/lv_anim.d ./Gui/lvgl/src/misc/lv_anim.o ./Gui/lvgl/src/misc/lv_anim.su ./Gui/lvgl/src/misc/lv_anim_timeline.d ./Gui/lvgl/src/misc/lv_anim_timeline.o ./Gui/lvgl/src/misc/lv_anim_timeline.su ./Gui/lvgl/src/misc/lv_area.d ./Gui/lvgl/src/misc/lv_area.o ./Gui/lvgl/src/misc/lv_area.su ./Gui/lvgl/src/misc/lv_async.d ./Gui/lvgl/src/misc/lv_async.o ./Gui/lvgl/src/misc/lv_async.su ./Gui/lvgl/src/misc/lv_bidi.d ./Gui/lvgl/src/misc/lv_bidi.o ./Gui/lvgl/src/misc/lv_bidi.su ./Gui/lvgl/src/misc/lv_color.d ./Gui/lvgl/src/misc/lv_color.o ./Gui/lvgl/src/misc/lv_color.su ./Gui/lvgl/src/misc/lv_fs.d ./Gui/lvgl/src/misc/lv_fs.o ./Gui/lvgl/src/misc/lv_fs.su ./Gui/lvgl/src/misc/lv_gc.d ./Gui/lvgl/src/misc/lv_gc.o ./Gui/lvgl/src/misc/lv_gc.su ./Gui/lvgl/src/misc/lv_ll.d ./Gui/lvgl/src/misc/lv_ll.o ./Gui/lvgl/src/misc/lv_ll.su ./Gui/lvgl/src/misc/lv_log.d ./Gui/lvgl/src/misc/lv_log.o ./Gui/lvgl/src/misc/lv_log.su ./Gui/lvgl/src/misc/lv_lru.d ./Gui/lvgl/src/misc/lv_lru.o ./Gui/lvgl/src/misc/lv_lru.su ./Gui/lvgl/src/misc/lv_math.d ./Gui/lvgl/src/misc/lv_math.o ./Gui/lvgl/src/misc/lv_math.su ./Gui/lvgl/src/misc/lv_mem.d ./Gui/lvgl/src/misc/lv_mem.o ./Gui/lvgl/src/misc/lv_mem.su ./Gui/lvgl/src/misc/lv_printf.d ./Gui/lvgl/src/misc/lv_printf.o ./Gui/lvgl/src/misc/lv_printf.su ./Gui/lvgl/src/misc/lv_style.d ./Gui/lvgl/src/misc/lv_style.o ./Gui/lvgl/src/misc/lv_style.su ./Gui/lvgl/src/misc/lv_style_gen.d ./Gui/lvgl/src/misc/lv_style_gen.o ./Gui/lvgl/src/misc/lv_style_gen.su ./Gui/lvgl/src/misc/lv_templ.d ./Gui/lvgl/src/misc/lv_templ.o ./Gui/lvgl/src/misc/lv_templ.su ./Gui/lvgl/src/misc/lv_timer.d ./Gui/lvgl/src/misc/lv_timer.o ./Gui/lvgl/src/misc/lv_timer.su ./Gui/lvgl/src/misc/lv_tlsf.d ./Gui/lvgl/src/misc/lv_tlsf.o ./Gui/lvgl/src/misc/lv_tlsf.su ./Gui/lvgl/src/misc/lv_txt.d ./Gui/lvgl/src/misc/lv_txt.o ./Gui/lvgl/src/misc/lv_txt.su ./Gui/lvgl/src/misc/lv_txt_ap.d ./Gui/lvgl/src/misc/lv_txt_ap.o ./Gui/lvgl/src/misc/lv_txt_ap.su ./Gui/lvgl/src/misc/lv_utils.d ./Gui/lvgl/src/misc/lv_utils.o ./Gui/lvgl/src/misc/lv_utils.su

.PHONY: clean-Gui-2f-lvgl-2f-src-2f-misc

