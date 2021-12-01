/*
 * Enlace.h
 *
 *  Created on: 29 nov. 2021
 *      Author: joshu
 */

#ifndef ENLACE_H_
#define ENLACE_H_

#pragma once


#define  __SYSTEM_CLOCK    48000000 // Frecuencias funcionales recomendadas: 12, 24 y 48 Mhz.

/* Archivos de cabecera importantes. */
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Drivers/BSP.h"

// Definiciones B�sicas.
#define ENTRADA 1
#define SALIDA 0

// Re-definici�n de los bits y puertos de entrada a utilizar.
#define FAN_ON      B3
#define FAN_AUTO    B4
#define SYSTEM_COOL B5
#define SYSTEM_OFF  B6
#define SYSTEM_HEAT B7
#define SP_UP       B1
#define SP_DOWN     B4

#define FAN_PORT        2
#define SYSTEM_PORT     2
#define SETPOINT_PORT   1
#define FAN_PORTT        P2
#define SYSTEM_PORTT     P2
#define SETPOINT_PORTT   P1

#define TEMP_CH         CH0
#define HEARTBEAT_CH    CH1
#define POT_PIN         AN1

// Re-definici�n de los bits y puertos de salida a utilizar.
#define FAN_LED     BSP_LED1
#define HEAT_LED    BSP_LED2
#define HBeatLED    BSP_LED3
#define COOL_LED    BSP_LED4

#define FAN_LED_PORT    BSP_LED1_PORT
#define HEAT_LED_PORT   BSP_LED2_PORT
#define HB_LED_PORT     BSP_LED3_PORT
#define COOL_LED_PORT   BSP_LED4_PORT

// Definiciones del estado 'normal' de los botones externos a la tarjeta (solo hay dos botones).
#define GND 0
#define VCC 1
#define NORMAL_STATE_EXTRA_BUTTONS GND  // Aqui se coloca GND o VCC.

// Definiciones del sistema.
#define MAX_MSG_SIZE 64
#define MAX_ADC_VALUE 16383             // (2 ^14 bits) es la resoluci�n default.
#define MAIN_UART (uint32_t)(EUSCI_A0)
#define DELAY 20000
#define ITERATIONS_TO_PRINT 49
/* Funci�n de interrupci�n para botones de setpoint. */
extern void INT_SWI(void);
extern void Int_registerInterrupt(uint32_t interruptNumber,
        void (*intHandler)(void));
#endif /* ENLACE_H_ */
