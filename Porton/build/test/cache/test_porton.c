#include "build/temp/_test_porton.c"
#include "src/teclas.h"
#include "src/leds.h"
#include "build/test/mocks/mock_sapi.h"
#include "src/porton.h"
#include "/var/lib/gems/2.5.0/gems/ceedling-0.29.1/vendor/unity/src/unity.h"




















void setUp(void) {

}



void tearDown(void) {

}





void test_PruebaDeInicializacion(void){

 delayWrite_CMockExpect(24, 

((void *)0)

, 500);

 delayWrite_CMockIgnoreArg_delay(25);

 POR_inicializar_MEF();

}



void test_PruebaDeMaquinaDeEstado(void){

 delayWrite_CMockExpect(30, 

((void *)0)

, 500);

 delayWrite_CMockIgnoreArg_delay(31);

 POR_inicializar_MEF();

 gpioWrite_CMockExpectAndReturn(33, LED3, 1, 1);

 gpioWrite_CMockExpectAndReturn(34, LED2, 1, 1);

 gpioWrite_CMockExpectAndReturn(35, LED1, 1, 1);

 delayRead_CMockExpectAndReturn(36, 

((void *)0)

, 

0

);

 delayRead_CMockIgnoreArg_delay(37);

 porton_MEF();

}
