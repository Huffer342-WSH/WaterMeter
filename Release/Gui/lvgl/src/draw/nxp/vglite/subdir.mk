################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: arm-gnu-toolchain-11.3.rel1
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Gui/lvgl/src/draw/nxp/vglite/lv_draw_vglite_arc.c \
../Gui/lvgl/src/draw/nxp/vglite/lv_draw_vglite_blend.c \
../Gui/lvgl/src/draw/nxp/vglite/lv_draw_vglite_rect.c \
../Gui/lvgl/src/draw/nxp/vglite/lv_gpu_nxp_vglite.c 

OBJS += \
./Gui/lvgl/src/draw/nxp/vglite/lv_draw_vglite_arc.o \
./Gui/lvgl/src/draw/nxp/vglite/lv_draw_vglite_blend.o \
./Gui/lvgl/src/draw/nxp/vglite/lv_draw_vglite_rect.o \
./Gui/lvgl/src/draw/nxp/vglite/lv_gpu_nxp_vglite.o 

C_DEPS += \
./Gui/lvgl/src/draw/nxp/vglite/lv_draw_vglite_arc.d \
./Gui/lvgl/src/draw/nxp/vglite/lv_draw_vglite_blend.d \
./Gui/lvgl/src/draw/nxp/vglite/lv_draw_vglite_rect.d \
./Gui/lvgl/src/draw/nxp/vglite/lv_gpu_nxp_vglite.d 


# Each subdirectory must supply rules for building sources it contributes
Gui/lvgl/src/draw/nxp/vglite/%.o Gui/lvgl/src/draw/nxp/vglite/%.su: ../Gui/lvgl/src/draw/nxp/vglite/%.c Gui/lvgl/src/draw/nxp/vglite/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/Third_Party/FatFs/src/drivers -I../Gui -I../Task -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Gui-2f-lvgl-2f-src-2f-draw-2f-nxp-2f-vglite

clean-Gui-2f-lvgl-2f-src-2f-draw-2f-nxp-2f-vglite:
	-$(RM) ./Gui/lvgl/src/draw/nxp/vglite/lv_draw_vglite_arc.d ./Gui/lvgl/src/draw/nxp/vglite/lv_draw_vglite_arc.o ./Gui/lvgl/src/draw/nxp/vglite/lv_draw_vglite_arc.su ./Gui/lvgl/src/draw/nxp/vglite/lv_draw_vglite_blend.d ./Gui/lvgl/src/draw/nxp/vglite/lv_draw_vglite_blend.o ./Gui/lvgl/src/draw/nxp/vglite/lv_draw_vglite_blend.su ./Gui/lvgl/src/draw/nxp/vglite/lv_draw_vglite_rect.d ./Gui/lvgl/src/draw/nxp/vglite/lv_draw_vglite_rect.o ./Gui/lvgl/src/draw/nxp/vglite/lv_draw_vglite_rect.su ./Gui/lvgl/src/draw/nxp/vglite/lv_gpu_nxp_vglite.d ./Gui/lvgl/src/draw/nxp/vglite/lv_gpu_nxp_vglite.o ./Gui/lvgl/src/draw/nxp/vglite/lv_gpu_nxp_vglite.su

.PHONY: clean-Gui-2f-lvgl-2f-src-2f-draw-2f-nxp-2f-vglite

