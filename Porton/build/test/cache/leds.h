#include "src/teclas.h"
#include "src/sapi.h"
int cont;



void LED_encender(gpioMap_t lampara);

void LED_apagar(gpioMap_t lampara);

void LED_titilarA(gpioMap_t lampara);

void LED_titilarC(gpioMap_t lampara);

void LED_titilar(gpioMap_t lampara);

void ledinicializacion(void);

void leds_Estado_cerrado(void);

void leds_Estado_abriendo(void);

void leds_Estado_abierto(void);

void leds_Estado_parado(void);

void leds_Estado_cerrando(void);
