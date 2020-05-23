#ifndef _MIKGAMESSTAGE_H_
#define _MIKGAMESSTAGE_H_

#include "..\funcs.h"
#include "..\banks\bank3.h"

void InitMikGamesStage()
{
	// General init
	InitStage();

	// Lo volvemos a apagar
	devkit_SMS_displayOff();

	// Load palette
	LoadBGPalette( ( unsigned char * ) logopalette_bin, logopalette_bin_bank );

	// Cargamos los graficos a la pantalla
	LoadGraphics( ( unsigned char * ) mikgamestiles_psgcompr, ( unsigned char * ) mikgamestilemap_bin, mikgamestilemap_bin_size, mikgamestiles_psgcompr_bank );
}

#endif//_MIKGAMESSTAGE_H_
