/*
 * stm32f407xe.h
 * Created on: 12/21/2025
 * Author: Sheik R. Ali
 */

#ifndef STM32F401XE_H
#define STM32F401XE_H

// Base addresses of AHBx and APBx buses
#define AHB2_BASE_ADDR      0x50000000U
#define AHB1_BASE_ADDR      0X40020000U
#define APB2_BASE_ADDR      0x40010000U
#define APB1_BASE_ADDR      0x40000000U

/*
 * Define the base addresses of the GPIO peripherals
 * AHB1 connects to: GPIOA, GPIOB, GPIOC, GPIOD, GPIOE, GPIOH,
 */

#define GPIOA_BASE_ADDR     (AHB1_BASE_ADDR + (0x0000))
#define GPIOB_BASE_ADDR     (AHB1_BASE_ADDR + (0x0400))
#define GPIOC_BASE_ADDR     (AHB1_BASE_ADDR + (0x0800))
#define GPIOD_BASE_ADDR     (AHB1_BASE_ADDR + (0x0C00))
#define GPIOE_BASE_ADDR     (AHB1_BASE_ADDR + (0x1000))
#define GPIOH_BASE_ADDR     (AHB1_BASE_ADDR + (0x1C00))

// Need to make register definitions


#endif /* STM32F401XE_H */