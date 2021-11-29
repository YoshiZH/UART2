/*
 * BSP.h
 *
 *  Created on: 29 nov. 2021
 *      Author: joshu
 */

#ifndef DRIVERS_BSP_H_
#define DRIVERS_BSP_H_

#include <msp432p401r.h>

#include "../Drivers/ADC_MSP432.h"
#include "../Drivers/GPIO_MSP432.h"
#include "../Drivers/INT_MSP432.h"
#include "../Drivers/UART.h"

#define BSP_BUTTON1 BIT1
#define BSP_BUTTON2 BIT4
#define BSP_BUTTON3 BIT0

#define BSP_BUTTON1_PORT 1
#define BSP_BUTTON2_PORT 1
#define BSP_BUTTON3_PORT 4


/* Definición de led's plasmados en tarjeta con su respectivo puerto. */

#define BSP_LED1 B0 // Rojo.
#define BSP_LED2 B0 // RGB: rojo.
#define BSP_LED3 B1 // RGB: verde.
#define BSP_LED4 B2 // RGB: azul.

#define BSP_LED1_PORT 1
#define BSP_LED2_PORT 2
#define BSP_LED3_PORT 2
#define BSP_LED4_PORT 2


#endif /* DRIVERS_BSP_H_ */
