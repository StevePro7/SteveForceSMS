#include "main.h"

void main()
{
	InitConsole();

	gamelevel = 0;
	gamestock = 3;

	// Mikgames
	InitMikGamesStage();

	// Game intro
	InitIntroStage( 1 );

	/*devkit_SMS_displayOff();
	devkit_SMS_setSpritePaletteColor( 0, 2, 1, 3 );
	devkit_SMS_displayOn();*/
	while( 1 )
	{
		devkit_SMS_waitForVBlank();
	}
}
