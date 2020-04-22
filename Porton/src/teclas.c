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

#include "teclas.h"

/*=====[Implementaciones de funciones publicas]==============================*/
void TEC_inicializar_MEF(void){
	estadoTecla = ESTADO_INICIO;
	delayWrite(&delayTecla, TIEMPO_ANTIREBOTE);
}

void TEC_antirebote_MEF(void){
	switch(estadoTecla){
	case ESTADO_UP:
		if (!gpioRead(TEC2)){
			estadoTecla=ESTADO_FALLING;
			delayWrite(&delayTecla, TIEMPO_ANTIREBOTE);
		}
		break;
	case ESTADO_FALLING:
		if(delayRead(&delayTecla)){
			if (!gpioRead(TEC2)){
				estadoTecla=ESTADO_DOWN;
				delayWrite(&delayTecla, TIEMPO_ANTIREBOTE);
			}
			else
				estadoTecla=ESTADO_UP;
		}
		break;
	case ESTADO_DOWN:
		if (gpioRead(TEC2)){
				estadoTecla=ESTADO_RAISING;
				delayWrite(&delayTecla, TIEMPO_ANTIREBOTE);
		}
		break;
	case ESTADO_RAISING:
		if(delayRead(&delayTecla)){
			if (gpioRead(TEC2)){
				estadoTecla=ESTADO_UP;
				delayWrite(&delayTecla, TIEMPO_ANTIREBOTE);
				valor=1;
			}
			else
				estadoTecla=ESTADO_UP;
		}
		break;
	default:
		TEC_inicializar_MEF();
		break;
	}
}
