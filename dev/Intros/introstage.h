//void InitIntroScroll()
//{
//	introstageposx = 0;
//	introstagevelx = 0;
//}

void setIntroStageGraphics()
{
	// Load palette
	LoadBGPalette( ( unsigned char * ) logopalette_bin, logopalette_bin_bank );

	// Init script
	InitScripts();

	// Init enemies
	InitEnemies();

	// Init explosions
	InitExplosions();

	// Labels
	InitTimeredLabels();

	// Scroll
	devkit_SMS_setBGScrollY( 192 );
}

void InitIntroStage( unsigned char intronum )
{
	// General init
	InitStage();

	// Lo volvemos a apagar
	devkit_SMS_displayOff();

	// Too big here
	setIntroStageGraphics();
}