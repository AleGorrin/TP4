#include "build/temp/_test_porton.c"
#include "build/test/mocks/mock_leds.h"
#include "build/test/mocks/mock_teclas.h"
#include "build/test/mocks/mock_sapi.h"
#include "src/porton.h"
#include "/var/lib/gems/2.5.0/gems/ceedling-0.29.1/vendor/unity/src/unity.h"


















void setUp(void) {

}



void tearDown(void) {

}





void test_PruebaDeInicializacion(void){

 delayWrite_CMockExpect(23, 

((void *)0)

, 500);

 delayWrite_CMockIgnoreArg_delay(24);

 POR_inicializar_MEF();

}



void test_PruebaDeMaquinaDeEstadoEnEstadoInicial(void){

 test_PruebaDeInicializacion();

 leds_Estado_cerrado_CMockIgnore();



 ledinicializacion_CMockExpect(32);

 delayRead_CMockExpectAndReturn(33, 

((void *)0)

, 

0

);

 delayRead_CMockIgnoreArg_delay(34);

 porton_MEF();

}



void test_PruebaDeMaquinaDeEstadoEnEstadoCerrado(void){

 test_PruebaDeInicializacion();

 leds_Estado_cerrado_CMockIgnore();



 ledinicializacion_CMockExpect(42);

 delayRead_CMockExpectAndReturn(43, 

((void *)0)

, 

1

);

 delayRead_CMockIgnoreArg_delay(44);

 delayWrite_CMockExpect(45, 

((void *)0)

, 500);

 delayWrite_CMockIgnoreArg_delay(46);

 leds_Estado_cerrado_CMockExpect(47);

 porton_MEF();

}
