/*=====[Nombre del modulo]=====================================================
 * Copyright YYYY Nombre completo del autor <author@mail.com>
 * All rights reserved.
 * Licencia: Texto de la licencia o al menos el nombre y un link
         (ejemplo: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.0.0
 * Fecha de creacion: YYYY/MM/DD
 */

/*=====[Evitar inclusion multiple comienzo]==================================*/

#ifndef _TECLAS_H_
#define _TECLAS_H_

/*=====[Inclusiones de dependencias de funciones publicas]===================*/
#include "sapi.h"

#define TIEMPO_ANTIREBOTE 40
#define ESTADO_INICIO ESTADO_UP
#define TECLA1 TEC1
#define TECLA2 TEC2
#define TECLA3 TEC3
#define TECLA4 TEC4

typedef enum{
	ESTADO_UP,
	ESTADO_RAISING,
	ESTADO_DOWN,
	ESTADO_FALLING,
} TEC_ESTADO_t;

bool_t valor;
static TEC_ESTADO_t estadoTecla;
static delay_t delayTecla;

/*=====[Prototipos de funciones publicas]====================================*/
void TEC_inicializar_MEF(void);
void TEC_antirebote_MEF(void);

void raisingtecla(uint8_t tecla);

#endif /* _TECLAS_H_ */
