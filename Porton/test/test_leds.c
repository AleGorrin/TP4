/*
Verificar Leds de inicializacion del sistema
Verificar Leds de Estado Cerrado
*/
#include "unity.h"
#include "leds.h"
#include "mock_sapi.h"

//defino un array para los tiempos de espera del test


void setUp(void) {
}

void tearDown(void) {
}

//Verificar Leds de inicializacion del sistema
void test_PruebaDeLedInicializacion(void){
    gpioWrite_ExpectAndReturn(LUZV, ON, 1);
    gpioWrite_ExpectAndReturn(LUZR, ON, 1);
    gpioWrite_ExpectAndReturn(LUZA, ON, 1);
	ledinicializacion();
}
//Verificar Leds de Estado Cerrado
void test_PruebaLedsEstadoCerrado(void){
    gpioWrite_ExpectAndReturn(LUZV, ON, 1);
    gpioWrite_ExpectAndReturn(LUZR, OFF, 1);
    gpioWrite_ExpectAndReturn(LUZA, OFF, 1);
    gpioWrite_ExpectAndReturn(LUZV2, OFF, 1);
    gpioWrite_ExpectAndReturn(LUZR2, OFF, 1);
    leds_Estado_cerrado();
}