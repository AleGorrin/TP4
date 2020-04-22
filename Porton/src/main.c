/*=============================================================================
 * Copyright (c) 2019, Eric Pernia <ericpernia@gmail.com>
 * All rights reserved.
 * License: bsd-3-clause (see LICENSE file)
 * Date: 2019/05/03
 * Version: 1
 *===========================================================================*/
/*=====[Inclusion de su propia cabecera]=====================================*/
#include "main.h"

/*==========================[EDU-CIAA-NXP]===================================*/
#define edu_ciaa_nxp_v_1_1_0

/*=======================[Funcion principal]================================*/
int main( void )
{
   // ------------------------- Setup --------------------------------------//
   boardInit();                              //Inicializo placa
   TEC_inicializar_MEF();                    //Inicializo MEF de las teclas
   POR_inicializar_MEF();                    //Inicializo MEF del porton
   
   while(1){
      TEC_antirebote_MEF();                  //ejecuto MEF de las teclas
	   porton_MEF();                          //ejecuto MEF del porton
   }
   return 0;
}