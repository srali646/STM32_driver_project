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

// Need to make register definitions. Make a struct for GPIO.
typedef struct
{
    uint32_t MODER;
    uint32_t OTYPER;
    uint32_t OSPEEDR; 
    uint32_t PUPDR;
    uint32_t IDR;
    uint32_t ODR;
    uint32_t BSRR;
    uint32_t LCKR;
    uint32_t AFR[2];
} GPIO_RegDef_t;

// Need the struct to point to the base address for the given GPIO port with a typecast GPIO_Reg_Def. 
#define GPIOA       ((GPIO_RegDef_t*)GPIOA_BASE_ADDR);
#define GPIOB       ((GPIO_RegDef_t*)GPIOB_BASE_ADDR);
#define GPIOC       ((GPIO_RegDef_t*)GPIOC_BASE_ADDR);
#define GPIOD       ((GPIO_RegDef_t*)GPIOD_BASE_ADDR);
#define GPIOE       ((GPIO_RegDef_t*)GPIOE_BASE_ADDR);
#define GPIOH       ((GPIO_RegDef_t*)GPIOH_BASE_ADDR);



#endif /* STM32F401XE_H */