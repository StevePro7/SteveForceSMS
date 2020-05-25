#include "main.h"

void main()
{
	InitConsole();

	gamelevel = 0;
	gamestock = 3;

	while( 1 )
	{
		// Mikgames
		//InitMikGamesStage();

		// Game intro
		//InitIntroStage( 1 );
		//InitIntroStage( 4 );
		//InitIntroStage( 2 );

		// Logo
		InitLogoStage();

		// If we have jukebox before play
		if( dojukebox == 1 )
			InitJukeboxStage();


		//for( ;; )
		//{
		//}
	}
}
