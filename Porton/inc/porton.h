/*=====[Nombre del modulo]=====================================================
 * Copyright YYYY Nombre completo del autor <author@mail.com>
 * All rights reserved.
 * Licencia: Texto de la licencia o al menos el nombre y un link
         (ejemplo: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.0.0
 * Fecha de creacion: YYYY/MM/DD
 */

#ifndef _SEMAFORO_H_
#define _SEMAFORO_H_

/*=====[Inclusiones de dependencias de funciones publicas]===================*/
#include "leds.h"
#include "teclas.h"

/*=====[Macros de definicion de constantes privadas]=========================*/
#define TIEMPO_INICIAL 500

// Tipo de datos enumerado
typedef enum {
   ESTADO_INICIAL,
   ESTADO_CERRADO,
   ESTADO_ABRIENDO,
   ESTADO_ABIERTO,
   ESTADO_PARADO,
   ESTADO_CERRANDO,
} PORTON_ESTADO_t;

/*=====[Definiciones de Variables globales privadas]=========================*/
static PORTON_ESTADO_t estadoPorton;
static delay_t delayPorton;
/*=====[Prototipos de funciones publicas]====================================*/
void porton_MEF(void);
void POR_inicializar_MEF(void);



#endif /* _SEMAFORO_H_ */
