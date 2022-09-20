################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: arm-gnu-toolchain-11.3.rel1
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Gui/lvgl/src/draw/nxp/pxp/lv_draw_pxp_blend.c \
../Gui/lvgl/src/draw/nxp/pxp/lv_gpu_nxp_pxp.c \
../Gui/lvgl/src/draw/nxp/pxp/lv_gpu_nxp_pxp_osa.c 

OBJS += \
./Gui/lvgl/src/draw/nxp/pxp/lv_draw_pxp_blend.o \
./Gui/lvgl/src/draw/nxp/pxp/lv_gpu_nxp_pxp.o \
./Gui/lvgl/src/draw/nxp/pxp/lv_gpu_nxp_pxp_osa.o 

C_DEPS += \
./Gui/lvgl/src/draw/nxp/pxp/lv_draw_pxp_blend.d \
./Gui/lvgl/src/draw/nxp/pxp/lv_gpu_nxp_pxp.d \
./Gui/lvgl/src/draw/nxp/pxp/lv_gpu_nxp_pxp_osa.d 


# Each subdirectory must supply rules for building sources it contributes
Gui/lvgl/src/draw/nxp/pxp/%.o Gui/lvgl/src/draw/nxp/pxp/%.su: ../Gui/lvgl/src/draw/nxp/pxp/%.c Gui/lvgl/src/draw/nxp/pxp/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/Third_Party/FatFs/src/drivers -I../Gui -I../Task -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Gui-2f-lvgl-2f-src-2f-draw-2f-nxp-2f-pxp

clean-Gui-2f-lvgl-2f-src-2f-draw-2f-nxp-2f-pxp:
	-$(RM) ./Gui/lvgl/src/draw/nxp/pxp/lv_draw_pxp_blend.d ./Gui/lvgl/src/draw/nxp/pxp/lv_draw_pxp_blend.o ./Gui/lvgl/src/draw/nxp/pxp/lv_draw_pxp_blend.su ./Gui/lvgl/src/draw/nxp/pxp/lv_gpu_nxp_pxp.d ./Gui/lvgl/src/draw/nxp/pxp/lv_gpu_nxp_pxp.o ./Gui/lvgl/src/draw/nxp/pxp/lv_gpu_nxp_pxp.su ./Gui/lvgl/src/draw/nxp/pxp/lv_gpu_nxp_pxp_osa.d ./Gui/lvgl/src/draw/nxp/pxp/lv_gpu_nxp_pxp_osa.o ./Gui/lvgl/src/draw/nxp/pxp/lv_gpu_nxp_pxp_osa.su

.PHONY: clean-Gui-2f-lvgl-2f-src-2f-draw-2f-nxp-2f-pxp

