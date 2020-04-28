/*
Verificar inicializacion de maquina de estado
Verificar maquina de estado en estado inicial
Verificar maquina de estado en estado cerrado
Verificar maquina de estado en estado parado
*/
#include "unity.h"
#include "porton.h"
#include "mock_sapi.h"
#include "leds.h"
#include "teclas.h"

//defino un array para los tiempos de espera del test


void setUp(void) {
}

void tearDown(void) {
}

//Verificar inicializacion del sistema
void test_PruebaDeInicializacion(void){
	delayWrite_Expect(NULL, TIEMPO_INICIAL);
	delayWrite_IgnoreArg_delay();
	POR_inicializar_MEF();
}
//Verificar maquina de estado en estado inicial
void test_PruebaDeMaquinaDeEstado(void){
	delayWrite_Expect(NULL, TIEMPO_INICIAL);
	delayWrite_IgnoreArg_delay();
	POR_inicializar_MEF();
	gpioWrite_ExpectAndReturn(LUZV, ON, 1);
	gpioWrite_ExpectAndReturn(LUZR, ON, 1);
	gpioWrite_ExpectAndReturn(LUZA, ON, 1);
	gpioWrite_ExpectAndReturn(LUZV2, OFF, 0);
	gpioWrite_ExpectAndReturn(LUZR2, OFF, 0);
	gpioWrite_ExpectAndReturn(LUZAZ, OFF, 0);
	delayRead_ExpectAndReturn(NULL, false);
	delayRead_IgnoreArg_delay();
	porton_MEF();
}
//Verificar maquina de estado en estado cerrado


//Verificar maquina de estado en estado parado
