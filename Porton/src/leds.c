/*=============================================================================
 * Copyright (c) 2019, Eric Pernia <ericpernia@gmail.com>
 * All rights reserved.
 * License: bsd-3-clause (see LICENSE file)
 * Date: 2019/05/03
 * Version: 1
 *===========================================================================*/
/*
 * led.c
 *
 *  Created on: Oct 14, 2019
 *      Author: rocku
 */

/*=====[Inclusion de su propia cabecera]=====================================*/
#include "leds.h"

/*=====[Implementaciones de funciones publicas]==============================*/
void LED_encender(gpioMap_t lampara)
{
   gpioWrite(lampara,ON);
}
void LED_apagar(gpioMap_t lampara)
{
   gpioWrite(lampara,OFF);
}
void LED_titilarA(gpioMap_t lampara)
{
   delay_t delay;                                     //Variable de Retardo no bloqueante
   delayConfig( &delay, 500 );                        // Inicializar Retardo no bloqueante con tiempo en milisegundos(500ms = 0,5s)
   uint8_t led = OFF;

   /* ------------- REPETIR DE ACUERDO A CONTADOR ------------- */
   while(cont<=10) {
      if ( delayRead( &delay ) ) {                    // repetir hasta 10 o hasta que se indique
         if( !led ) {
            led = ON;
            cont=cont+1;
         } else
            led = OFF;
         gpioWrite( lampara, led );
      }
      if(valor = !gpioRead(TEC3)) {                   //salida mediante tecla3
         break;
      }
      if(valor = !gpioRead(TEC1)) {                   //salida mediante tecla1
         break;
      }
   }
}
void LED_titilarC(gpioMap_t lampara)
{
   delay_t delay;                                     //Variable de Retardo no bloqueante
   delayConfig( &delay, 500 );                        //Inicializar Retardo no bloqueante con tiempo en milisegundos(500ms = 0,5s)
   uint8_t led = OFF;
   /* ------------- REPETIR DE ACUERDO A CONTADOR ------------- */
   while(cont>=0) {
      if ( delayRead( &delay ) ) {                    // repetir hasta 10 o hasta que se indique
         if( !led ) {
            led = ON;
            cont=cont-1;
         } else
            led = OFF;
         gpioWrite( lampara, led );
      }
      if(valor = !gpioRead(TEC3)) {                   //salida mediante tecla3
         break;
      }
      if(valor = !gpioRead(TEC1)) {                   //salida mediante tecla1
         break;
      }
   }
}
void LED_titilar(gpioMap_t lampara)
{
   delay_t delay;                                     //Variable de Retardo no bloqueante
   delayConfig( &delay, 500 );                        //Inicializar Retardo no bloqueante con tiempo en milisegundos(500ms = 0,5s)

   uint8_t led = OFF;

   /* ------------- REPETIR hasta detener ------------- */
   while(1) {                                         //Se repite indeterminadamente
      if ( delayRead( &delay ) ) {
         if( !led )
            led = ON;
         else
            led = OFF;
         gpioWrite( lampara, led );
      }
      if(valor = !gpioRead(TEC2)) {                   //Selecciona si se desea abrir
         break;
      }
      if(valor = !gpioRead(TEC4)) {                   //Selecciona si se desea cerrar
         break;
      }
   }
}
//====================FUNCIONES DE LEDS PARA LOS ESTADOS========================
void ledinicializacion(void)
{
   LED_encender(LUZV);
   LED_encender(LUZR);
   LED_encender(LUZA);
}
void leds_Estado_cerrado(void)
{
   LED_encender(LUZV);
   LED_apagar(LUZR);
   LED_apagar(LUZA);
   LED_apagar(LUZV2);
   LED_apagar(LUZR2);
}
void leds_Estado_abriendo(void)
{
   LED_encender(LUZR2);
   LED_apagar(LUZV);
   LED_apagar(LUZAZ);
   LED_apagar(LUZV2);
}
void leds_Estado_abierto(void)
{
   LED_encender(LUZR);
   LED_apagar(LUZR2);
   LED_apagar(LUZAZ);
   LED_apagar(LUZV2);
}
void leds_Estado_parado(void)
{
   LED_encender(LUZAZ);
   LED_apagar(LUZR2);
   LED_apagar(LUZV);
}
void leds_Estado_cerrando(void)
{
   LED_encender(LUZV2);
   LED_apagar(LUZV);
   LED_apagar(LUZAZ);
}