/*
 * stm32f401xe.h
 * Created on: 12/21/2025
 * Author: Sheik R. Ali
 */

#ifndef STM32F401XE_H
#define STM32F401XE_H

#define ENABLE  1 
#define DISABLE 0

// Base addresses of AHBx and APBx buses
#define AHB2_BASE_ADDR      0x50000000U
#define AHB1_BASE_ADDR      0X40020000U
#define APB2_BASE_ADDR      0x40010000U
#define APB1_BASE_ADDR      0x40000000U

// Base address of RCC
#define RCC_BASE_ADDR       0x40023800U

//Register Definitions for RCC register
typedef struct
{
    uint32_t CR;
    uint32_t PLLCFGR;
    uint32_t CFGR; 
    uint32_t CIR;
    uint32_t AHB1RSTR;
    uint32_t AHB2RSTR;
    uint32_t RESERVED0[2];
    uint32_t APB1RSTR;
    uint32_t APB2RSTR;
    uint32_t RESERVED1[2];
    uint32_t AHB1ENR;
    uint32_t AHB2ENR;
    uint32_t RESERVED2[2];
    uint32_t APB1ENR;
    uint32_t APB2ENR;
    uint32_t RESERVED3[2];
    uint32_t AHB1LPENR;
    uint32_t AHB2LPENR;
    uint32_t RESERVED4[2];
    uint32_t APB1LPENR;
    uint32_t APB2LPENR;
    uint32_t RESERVED5[2];
    uint32_t BDCR;
    uint32_t CSR;
    uint32_t SSCGR;
    uint32_t PLLI2SCFGR;          
} RCC_RegDef_t;

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
#define GPIOA       ((GPIO_RegDef_t*)GPIOA_BASE_ADDR)
#define GPIOB       ((GPIO_RegDef_t*)GPIOB_BASE_ADDR)
#define GPIOC       ((GPIO_RegDef_t*)GPIOC_BASE_ADDR)
#define GPIOD       ((GPIO_RegDef_t*)GPIOD_BASE_ADDR)
#define GPIOE       ((GPIO_RegDef_t*)GPIOE_BASE_ADDR)
#define GPIOH       ((GPIO_RegDef_t*)GPIOH_BASE_ADDR)

// Pointer for RCC Base address
#define RCC         ((RCC_RegDef_t*)RCC_BASE_ADDR)

// Define the GPIO Enable clock function
#define GPIOA_Clk_En()          (RCC -> AHB1ENR |= (1<<0))
#define GPIOB_Clk_En()          (RCC -> AHB1ENR |= (1<<1))
#define GPIOC_Clk_En()          (RCC -> AHB1ENR |= (1<<2))          
#define GPIOD_Clk_En()          (RCC -> AHB1ENR |= (1<<3))          
#define GPIOE_Clk_En()          (RCC -> AHB1ENR |= (1<<4))          
#define GPIOH_Clk_En()          (RCC -> AHB1ENR |= (1<<7))          

// Define the GPIO Disable clock function
#define GPIOA_Clk_Di()          (RCC -> AHB1ENR &= ~(1<<0))
#define GPIOB_Clk_Di()          (RCC -> AHB1ENR &= ~(1<<1))
#define GPIOC_Clk_Di()          (RCC -> AHB1ENR &= ~(1<<2))          
#define GPIOD_Clk_Di()          (RCC -> AHB1ENR &= ~(1<<3))          
#define GPIOE_Clk_Di()          (RCC -> AHB1ENR &= ~(1<<4))          
#define GPIOH_Clk_Di()          (RCC -> AHB1ENR &= ~(1<<7))  

#endif /* STM32F401XE_H */