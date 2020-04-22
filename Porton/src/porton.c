/*=====[Nombre del modulo]=====================================================
 * Copyright YYYY Nombre completo del autor <author@mail.com>
 * All rights reserved.
 * Licencia: Texto de la licencia o al menos el nombre y un link
         (ejemplo: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.0.0
 * Fecha de creacion: YYYY/MM/DD
 */

/*=====[Inclusion de su propia cabecera]=====================================*/

#include "porton.h"

//-----------------------INICIALIZAR MEF DEL PORTON-------------------------------

void POR_inicializar_MEF(void)                             //Funcion para inicializar maquina de estado
{
   estadoPorton = ESTADO_INICIAL;
   delayWrite(&delayPorton, TIEMPO_INICIAL);
}

//------------------MAQUINA DE ESTADO FINITO DEL PORTON---------------------------
void porton_MEF(void)
{
   switch(estadoPorton) {
   case ESTADO_INICIAL:
      ledinicializacion();                                  //inicializar leds del estado
      if(delayRead(&delayPorton)) {
         estadoPorton=ESTADO_CERRADO;
         delayWrite(&delayPorton, TIEMPO_INICIAL);          //prueba de leds
      }
   case ESTADO_CERRADO:
      leds_Estado_cerrado();                                //inicializar leds del estado
      cont=0;                                               //contador de tiempo 0=cerrado  10= abierto
      if(valor==1) {                                        //Accion al pulsar la tecla 2
         estadoPorton=ESTADO_ABRIENDO;
      }
      break;
   case ESTADO_ABRIENDO:
      leds_Estado_abriendo();                               //inicializar leds del estado
      LED_titilarA(LUZR);                                   //funcion de titilar el led rojo mientras abre
      if(valor = !gpioRead(TEC3))                           //cambia a estado parado
         estadoPorton=ESTADO_PARADO;
      else if(valor = !gpioRead(TEC1))                      //cambia a estado parado
         estadoPorton=ESTADO_PARADO;
      else if(cont=10)                                       //si pasa el tiempo, pasa a estado abierto
         estadoPorton=ESTADO_ABIERTO;
      else
         estadoPorton=ESTADO_PARADO;
      break;
   case ESTADO_ABIERTO:
      leds_Estado_abierto();                                //inicializar leds del estado
      cont=10;                                               //contador de estado abierto
      if(valor = !gpioRead(TEC4)) {                         //cambia a estado cerrado si pulso tecla 4
         estadoPorton=ESTADO_CERRANDO;
      }
      break;
   case ESTADO_PARADO:
      leds_Estado_parado();                                 //inicializa leds de estado parado
      LED_titilar(LUZR);                                    //titilo indeterminadamente hasta que se pulse tecla 2 para seguir abriendo o tecla 4 para cerrar
      if(valor = !gpioRead(TEC2)) {
         estadoPorton=ESTADO_ABRIENDO;
      }
      if(valor = !gpioRead(TEC4)) {
         estadoPorton=ESTADO_CERRANDO;
      }
      break;
   case ESTADO_CERRANDO:   
      leds_Estado_cerrando();                               //inicializo leds estado cerrando
      LED_titilarC(LUZR);                                   //titilo indeterminadamente hasta que se pulse tecla 2 para seguir abriendo o tecla 4 para cerrar
      if(valor = !gpioRead(TEC3))
         estadoPorton=ESTADO_PARADO;
      else if(valor = !gpioRead(TEC1))
         estadoPorton=ESTADO_PARADO;
      else if(cont=10)                                       //cambio de estado si el contador llega a determinado numero
         estadoPorton=ESTADO_CERRADO;
      else
         estadoPorton=ESTADO_ABRIENDO;
      break;
   default:
      POR_inicializar_MEF();
      break;
   }
}