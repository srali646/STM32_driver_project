/*
 * GPIO_Driver.h
 * Created on: 12/21/2025
 * Author: Sheik R. Ali
 */

#ifndef GPIO_DRIVER_H_
#define GPIO_DRIVER_H_

// Prototype functions
// Clock EN API. Needed for any peripheral.
void GPIO_ClockControl(void);

// GPIO Init and Deinit
void GPIO_Init(void);
void GPIO_DeInit(void);

// GPIO read write functions
void GPIO_ReadFromIn_Pin(void);
void GPIO_ReadFromIn_Port(void);

void GPIO_WriteToOut_Pin(void);
void GPIO_WriteToOut_Port(void);

#endif /*GPIO_DRIVER_H_*/

