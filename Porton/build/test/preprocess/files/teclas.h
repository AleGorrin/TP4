#include "src/sapi.h"
typedef enum{

 ESTADO_UP,

 ESTADO_RAISING,

 ESTADO_DOWN,

 ESTADO_FALLING,

} TEC_ESTADO_t;



bool_t valor;

static TEC_ESTADO_t estadoTecla;

static delay_t delayTecla;





void TEC_inicializar_MEF(void);

void TEC_antirebote_MEF(void);



void raisingtecla(uint8_t tecla);
