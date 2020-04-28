









typedef 

       _Bool 

            bool_t;

typedef int delay_t;

typedef int tick_t;









typedef enum{

 LED1,

 LED2,

 LED3,

 LED4,

 LEDR,

 LEDG,

 LEDB,

 TEC1,

 TEC2,

 TEC3,

 TEC4

}gpioMap_t;



bool_t gpioRead( gpioMap_t pin );

bool_t gpioWrite( gpioMap_t pin, bool_t value );





void delayConfig( delay_t * delay, tick_t duration );

bool_t delayRead( delay_t * delay );

void delayWrite( delay_t * delay, tick_t duration );
