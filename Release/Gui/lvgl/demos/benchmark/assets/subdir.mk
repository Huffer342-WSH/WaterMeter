################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: arm-gnu-toolchain-11.3.rel1
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_alpha16.c \
../Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_argb.c \
../Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_chroma_keyed.c \
../Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_indexed16.c \
../Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_rgb.c \
../Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_rgb565a8.c \
../Gui/lvgl/demos/benchmark/assets/lv_font_bechmark_montserrat_12_compr_az.c.c \
../Gui/lvgl/demos/benchmark/assets/lv_font_bechmark_montserrat_16_compr_az.c.c \
../Gui/lvgl/demos/benchmark/assets/lv_font_bechmark_montserrat_28_compr_az.c.c 

OBJS += \
./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_alpha16.o \
./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_argb.o \
./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_chroma_keyed.o \
./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_indexed16.o \
./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_rgb.o \
./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_rgb565a8.o \
./Gui/lvgl/demos/benchmark/assets/lv_font_bechmark_montserrat_12_compr_az.c.o \
./Gui/lvgl/demos/benchmark/assets/lv_font_bechmark_montserrat_16_compr_az.c.o \
./Gui/lvgl/demos/benchmark/assets/lv_font_bechmark_montserrat_28_compr_az.c.o 

C_DEPS += \
./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_alpha16.d \
./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_argb.d \
./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_chroma_keyed.d \
./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_indexed16.d \
./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_rgb.d \
./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_rgb565a8.d \
./Gui/lvgl/demos/benchmark/assets/lv_font_bechmark_montserrat_12_compr_az.c.d \
./Gui/lvgl/demos/benchmark/assets/lv_font_bechmark_montserrat_16_compr_az.c.d \
./Gui/lvgl/demos/benchmark/assets/lv_font_bechmark_montserrat_28_compr_az.c.d 


# Each subdirectory must supply rules for building sources it contributes
Gui/lvgl/demos/benchmark/assets/%.o Gui/lvgl/demos/benchmark/assets/%.su: ../Gui/lvgl/demos/benchmark/assets/%.c Gui/lvgl/demos/benchmark/assets/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/Third_Party/FatFs/src/drivers -I../Gui -I../Task -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Gui-2f-lvgl-2f-demos-2f-benchmark-2f-assets

clean-Gui-2f-lvgl-2f-demos-2f-benchmark-2f-assets:
	-$(RM) ./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_alpha16.d ./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_alpha16.o ./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_alpha16.su ./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_argb.d ./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_argb.o ./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_argb.su ./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_chroma_keyed.d ./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_chroma_keyed.o ./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_chroma_keyed.su ./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_indexed16.d ./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_indexed16.o ./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_indexed16.su ./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_rgb.d ./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_rgb.o ./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_rgb.su ./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_rgb565a8.d ./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_rgb565a8.o ./Gui/lvgl/demos/benchmark/assets/img_benchmark_cogwheel_rgb565a8.su ./Gui/lvgl/demos/benchmark/assets/lv_font_bechmark_montserrat_12_compr_az.c.d ./Gui/lvgl/demos/benchmark/assets/lv_font_bechmark_montserrat_12_compr_az.c.o ./Gui/lvgl/demos/benchmark/assets/lv_font_bechmark_montserrat_12_compr_az.c.su ./Gui/lvgl/demos/benchmark/assets/lv_font_bechmark_montserrat_16_compr_az.c.d ./Gui/lvgl/demos/benchmark/assets/lv_font_bechmark_montserrat_16_compr_az.c.o ./Gui/lvgl/demos/benchmark/assets/lv_font_bechmark_montserrat_16_compr_az.c.su ./Gui/lvgl/demos/benchmark/assets/lv_font_bechmark_montserrat_28_compr_az.c.d ./Gui/lvgl/demos/benchmark/assets/lv_font_bechmark_montserrat_28_compr_az.c.o ./Gui/lvgl/demos/benchmark/assets/lv_font_bechmark_montserrat_28_compr_az.c.su

.PHONY: clean-Gui-2f-lvgl-2f-demos-2f-benchmark-2f-assets

