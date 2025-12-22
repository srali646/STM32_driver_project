/*
 * GPIO_Driver.c
 * Created on: 12/22/2025
 * Author: Sheik R. Ali
 */
#include "GPIO_Driver.h"
#include "stm32f401xe.h"

 void GPIO_ClockControl(GPIO_RegDef_t *pGPIOx, uint_t Enable)
 {
    if (Enable == ENABLE)
    {
        if (pGPIOx == GPIOA)
        {
            GPIOA_Clk_En();
        }
        else if (pGPIOx == GPIOB)
        {
            GPIOB_Clk_En();
        }
        else if (pGPIOx == GPIOC)
        {
            GPIOC_Clk_En();
        }
        else if (pGPIOx == GPIOD)
        {
            GPIOD_Clk_En();
        }
        else if (pGPIOx == GPIOE)
        {
            GPIOE_Clk_En();
        }
        else if (pGPIOx == GPIOH)
        {
            GPIOH_Clk_En();
        }
    }
    else if (pGPIOx == DISABLE)
    {
        if (pGPIOx == GPIOA)
        {
            GPIOA_Clk_Di();
        }
        else if (pGPIOx == GPIOB)
        {
            GPIOB_Clk_Di();
        }
        else if (pGPIOx == GPIOC)
        {
            GPIOC_Clk_Di();
        }
        else if (pGPIOx == GPIOD)
        {
            GPIOD_Clk_Di();
        }
        else if (pGPIOx == GPIOE)
        {
            GPIOE_Clk_Di();
        }
        else if (pGPIOx == GPIOH)
        {
            GPIOH_Clk_Di();
        }
    }
 }

