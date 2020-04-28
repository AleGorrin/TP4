/*
Verificar inicializacion de maquina de estado
Verificar maquina de estado en estado inicial
Verificar maquina de estado en estado cerrado
*/
#include "unity.h"
#include "porton.h"
#include "mock_sapi.h"
#include "mock_teclas.h"
#include "mock_leds.h"

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
void test_PruebaDeMaquinaDeEstadoEnEstadoInicial(void){
	test_PruebaDeInicializacion();
	leds_Estado_cerrado_Ignore();						//Ignoro leds estado cerrado ya que se espera esta funcion de forma
														//indirecta y es ignorada por que en la pruba se espera el estado inicial
	ledinicializacion_Expect();							//Se espera la llamada de esta funcion 
	delayRead_ExpectAndReturn(NULL, false);				//Se dan los valores del condicional del if, evitando que entre al ser false
	delayRead_IgnoreArg_delay();						//Se ignora el argumento relacionado al puntero
	porton_MEF();
}
//Verificar maquina de estado en estado cerrado
void test_PruebaDeMaquinaDeEstadoEnEstadoCerrado(void){
	test_PruebaDeInicializacion();					 
	leds_Estado_cerrado_Ignore();						//Ignoro leds estado cerrado ya que se espera esta funcion de forma
														//indirecta y es ignorada por que en la pruba se espera el estado inicial								
	ledinicializacion_Expect();							//Se espera que la maquina de estado este inicializada		 
	delayRead_ExpectAndReturn(NULL, true);				//Al regresar true, entro en el condicional	
	delayRead_IgnoreArg_delay();
	delayWrite_Expect(NULL, TIEMPO_INICIAL);			//Pasa el tiempo inicial y se inicia la maquina de estado
	delayWrite_IgnoreArg_delay();						//con el porton cerrado
	leds_Estado_cerrado_Expect();						//Se espera la llamada del orden de leds para estado cerrado (inicial)
	porton_MEF();
}
