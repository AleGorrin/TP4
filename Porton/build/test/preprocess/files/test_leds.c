#include "build/temp/_test_leds.c"
#include "build/test/mocks/mock_sapi.h"
#include "src/leds.h"
#include "/var/lib/gems/2.5.0/gems/ceedling-0.29.1/vendor/unity/src/unity.h"
















void setUp(void) {

}



void tearDown(void) {

}





void test_PruebaDeLedInicializacion(void){

    gpioWrite_CMockExpectAndReturn(20, LED3, 1, 1);

    gpioWrite_CMockExpectAndReturn(21, LED2, 1, 1);

    gpioWrite_CMockExpectAndReturn(22, LED1, 1, 1);

 ledinicializacion();

}



void test_PruebaLedsEstadoCerrado(void){

    gpioWrite_CMockExpectAndReturn(27, LED3, 1, 1);

    gpioWrite_CMockExpectAndReturn(28, LED2, 0, 1);

    gpioWrite_CMockExpectAndReturn(29, LED1, 0, 1);

    gpioWrite_CMockExpectAndReturn(30, LEDG, 0, 1);

    gpioWrite_CMockExpectAndReturn(31, LEDR, 0, 1);

    leds_Estado_cerrado();

}
