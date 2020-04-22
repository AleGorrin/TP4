/*=============================================================================
 * Copyright (c) 2019, Eric Pernia <ericpernia@gmail.com>
 * All rights reserved.
 * License: bsd-3-clause (see LICENSE file)
 * Date: 2019/05/03
 * Version: 1
 *===========================================================================*/
/*
 * led.h
 *
 *  Created on: Oct 14, 2019
 *      Author: rocku
 */

#ifndef TP_ALEJANDROG_PORTON_INC_LEDS_H_
#define TP_ALEJANDROG_PORTON_INC_LEDS_H_

#include "sapi.h"
#include "teclas.h"


/*=====[Definicion de constantes publicas]==================================*/
#define LUZR   LED2
#define LUZA   LED1
#define LUZV   LED3
#define LUZR2  LEDR
#define LUZV2  LEDG
#define LUZAZ  LEDB


#define TIEMPO_EN_ROJO     3000 // ms
#define TIEMPO_EN_AMARILLO 1000 // ms
#define TIEMPO_EN_VERDE    2000 // ms

//===========Contador como variable global=================
int cont;
/*=====[Prototipos de funciones publicas]====================================*/
void LED_encender(gpioMap_t lampara);
void LED_apagar(gpioMap_t lampara);
void LED_titilarA(gpioMap_t lampara);
void LED_titilarC(gpioMap_t lampara);
void LED_titilar(gpioMap_t lampara);
void ledinicializacion(void);
void leds_Estado_cerrado(void);
void leds_Estado_abriendo(void);
void leds_Estado_abierto(void);
void leds_Estado_parado(void);
void leds_Estado_cerrando(void);

#endif /* TP_ALEJANDROG_PORTON_INC_LED_H_ */
