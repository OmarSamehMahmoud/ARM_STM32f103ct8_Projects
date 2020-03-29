################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/AFIO_prog.c \
../src/DIO_program.c \
../src/EXTI_prog.c \
../src/NVIC_prog.c \
../src/RCC_program.c \
../src/SysTick_Prog.c \
../src/_write.c \
../src/main.c 

OBJS += \
./src/AFIO_prog.o \
./src/DIO_program.o \
./src/EXTI_prog.o \
./src/NVIC_prog.o \
./src/RCC_program.o \
./src/SysTick_Prog.o \
./src/_write.o \
./src/main.o 

C_DEPS += \
./src/AFIO_prog.d \
./src/DIO_program.d \
./src/EXTI_prog.d \
./src/NVIC_prog.d \
./src/RCC_program.d \
./src/SysTick_Prog.d \
./src/_write.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F10X_MD -DUSE_STDPERIPH_DRIVER -DHSE_VALUE=8000000 -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f1-stdperiph" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


