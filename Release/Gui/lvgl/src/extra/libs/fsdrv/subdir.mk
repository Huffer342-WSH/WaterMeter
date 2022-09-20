################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: arm-gnu-toolchain-11.3.rel1
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Gui/lvgl/src/extra/libs/fsdrv/lv_fs_fatfs.c \
../Gui/lvgl/src/extra/libs/fsdrv/lv_fs_posix.c \
../Gui/lvgl/src/extra/libs/fsdrv/lv_fs_stdio.c \
../Gui/lvgl/src/extra/libs/fsdrv/lv_fs_win32.c 

OBJS += \
./Gui/lvgl/src/extra/libs/fsdrv/lv_fs_fatfs.o \
./Gui/lvgl/src/extra/libs/fsdrv/lv_fs_posix.o \
./Gui/lvgl/src/extra/libs/fsdrv/lv_fs_stdio.o \
./Gui/lvgl/src/extra/libs/fsdrv/lv_fs_win32.o 

C_DEPS += \
./Gui/lvgl/src/extra/libs/fsdrv/lv_fs_fatfs.d \
./Gui/lvgl/src/extra/libs/fsdrv/lv_fs_posix.d \
./Gui/lvgl/src/extra/libs/fsdrv/lv_fs_stdio.d \
./Gui/lvgl/src/extra/libs/fsdrv/lv_fs_win32.d 


# Each subdirectory must supply rules for building sources it contributes
Gui/lvgl/src/extra/libs/fsdrv/%.o Gui/lvgl/src/extra/libs/fsdrv/%.su: ../Gui/lvgl/src/extra/libs/fsdrv/%.c Gui/lvgl/src/extra/libs/fsdrv/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/Third_Party/FatFs/src/drivers -I../Gui -I../Task -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Gui-2f-lvgl-2f-src-2f-extra-2f-libs-2f-fsdrv

clean-Gui-2f-lvgl-2f-src-2f-extra-2f-libs-2f-fsdrv:
	-$(RM) ./Gui/lvgl/src/extra/libs/fsdrv/lv_fs_fatfs.d ./Gui/lvgl/src/extra/libs/fsdrv/lv_fs_fatfs.o ./Gui/lvgl/src/extra/libs/fsdrv/lv_fs_fatfs.su ./Gui/lvgl/src/extra/libs/fsdrv/lv_fs_posix.d ./Gui/lvgl/src/extra/libs/fsdrv/lv_fs_posix.o ./Gui/lvgl/src/extra/libs/fsdrv/lv_fs_posix.su ./Gui/lvgl/src/extra/libs/fsdrv/lv_fs_stdio.d ./Gui/lvgl/src/extra/libs/fsdrv/lv_fs_stdio.o ./Gui/lvgl/src/extra/libs/fsdrv/lv_fs_stdio.su ./Gui/lvgl/src/extra/libs/fsdrv/lv_fs_win32.d ./Gui/lvgl/src/extra/libs/fsdrv/lv_fs_win32.o ./Gui/lvgl/src/extra/libs/fsdrv/lv_fs_win32.su

.PHONY: clean-Gui-2f-lvgl-2f-src-2f-extra-2f-libs-2f-fsdrv

