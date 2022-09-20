################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: arm-gnu-toolchain-11.3.rel1
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Task/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/subdir.mk
-include Middlewares/Third_Party/FatFs/src/option/subdir.mk
-include Middlewares/Third_Party/FatFs/src/drivers/subdir.mk
-include Middlewares/Third_Party/FatFs/src/subdir.mk
-include Gui/lvgl_porting/subdir.mk
-include Gui/lvgl_app/subdir.mk
-include Gui/lvgl/src/widgets/subdir.mk
-include Gui/lvgl/src/misc/subdir.mk
-include Gui/lvgl/src/hal/subdir.mk
-include Gui/lvgl/src/font/subdir.mk
-include Gui/lvgl/src/extra/widgets/win/subdir.mk
-include Gui/lvgl/src/extra/widgets/tileview/subdir.mk
-include Gui/lvgl/src/extra/widgets/tabview/subdir.mk
-include Gui/lvgl/src/extra/widgets/spinner/subdir.mk
-include Gui/lvgl/src/extra/widgets/spinbox/subdir.mk
-include Gui/lvgl/src/extra/widgets/span/subdir.mk
-include Gui/lvgl/src/extra/widgets/msgbox/subdir.mk
-include Gui/lvgl/src/extra/widgets/meter/subdir.mk
-include Gui/lvgl/src/extra/widgets/menu/subdir.mk
-include Gui/lvgl/src/extra/widgets/list/subdir.mk
-include Gui/lvgl/src/extra/widgets/led/subdir.mk
-include Gui/lvgl/src/extra/widgets/keyboard/subdir.mk
-include Gui/lvgl/src/extra/widgets/imgbtn/subdir.mk
-include Gui/lvgl/src/extra/widgets/colorwheel/subdir.mk
-include Gui/lvgl/src/extra/widgets/chart/subdir.mk
-include Gui/lvgl/src/extra/widgets/calendar/subdir.mk
-include Gui/lvgl/src/extra/widgets/animimg/subdir.mk
-include Gui/lvgl/src/extra/themes/mono/subdir.mk
-include Gui/lvgl/src/extra/themes/default/subdir.mk
-include Gui/lvgl/src/extra/themes/basic/subdir.mk
-include Gui/lvgl/src/extra/others/snapshot/subdir.mk
-include Gui/lvgl/src/extra/others/msg/subdir.mk
-include Gui/lvgl/src/extra/others/monkey/subdir.mk
-include Gui/lvgl/src/extra/others/imgfont/subdir.mk
-include Gui/lvgl/src/extra/others/ime/subdir.mk
-include Gui/lvgl/src/extra/others/gridnav/subdir.mk
-include Gui/lvgl/src/extra/others/fragment/subdir.mk
-include Gui/lvgl/src/extra/libs/sjpg/subdir.mk
-include Gui/lvgl/src/extra/libs/rlottie/subdir.mk
-include Gui/lvgl/src/extra/libs/qrcode/subdir.mk
-include Gui/lvgl/src/extra/libs/png/subdir.mk
-include Gui/lvgl/src/extra/libs/gif/subdir.mk
-include Gui/lvgl/src/extra/libs/fsdrv/subdir.mk
-include Gui/lvgl/src/extra/libs/freetype/subdir.mk
-include Gui/lvgl/src/extra/libs/ffmpeg/subdir.mk
-include Gui/lvgl/src/extra/libs/bmp/subdir.mk
-include Gui/lvgl/src/extra/layouts/grid/subdir.mk
-include Gui/lvgl/src/extra/layouts/flex/subdir.mk
-include Gui/lvgl/src/extra/subdir.mk
-include Gui/lvgl/src/draw/swm341_dma2d/subdir.mk
-include Gui/lvgl/src/draw/sw/subdir.mk
-include Gui/lvgl/src/draw/stm32_dma2d/subdir.mk
-include Gui/lvgl/src/draw/sdl/subdir.mk
-include Gui/lvgl/src/draw/nxp/vglite/subdir.mk
-include Gui/lvgl/src/draw/nxp/pxp/subdir.mk
-include Gui/lvgl/src/draw/nxp/subdir.mk
-include Gui/lvgl/src/draw/arm2d/subdir.mk
-include Gui/lvgl/src/draw/subdir.mk
-include Gui/lvgl/src/core/subdir.mk
-include Gui/lvgl/demos/widgets/assets/subdir.mk
-include Gui/lvgl/demos/widgets/subdir.mk
-include Gui/lvgl/demos/benchmark/assets/subdir.mk
-include Gui/lvgl/demos/benchmark/subdir.mk
-include Gui/Driver_MSP3520/Drive_xpt2046/subdir.mk
-include Gui/Driver_MSP3520/Drive_ili9488/subdir.mk
-include FATFS/Target/subdir.mk
-include FATFS/App/subdir.mk
-include Drivers/STM32F1xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := WaterMeter
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
WaterMeter.elf \

MAP_FILES += \
WaterMeter.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
WaterMeter.list \


# All Target
all: main-build

# Main-build Target
main-build: WaterMeter.elf secondary-outputs

# Tool invocations
WaterMeter.elf WaterMeter.map: $(OBJS) $(USER_OBJS) F:\Project\STM32_Project\Project\WaterMeter\STM32F103VETX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "WaterMeter.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"F:\Project\STM32_Project\Project\WaterMeter\STM32F103VETX_FLASH.ld" --specs=nosys.specs -Wl,-Map="WaterMeter.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -u _printf_float -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

WaterMeter.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "WaterMeter.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) WaterMeter.elf WaterMeter.list WaterMeter.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
