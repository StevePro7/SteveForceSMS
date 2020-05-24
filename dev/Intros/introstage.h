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

	// Too big here
	switch( intronum )
	{
	case 1:InitIntro1Stage(); break;
	case 2:InitIntro2Stage(); break;
	case 3:InitFinishStage(); break;
	case 4:InitIntro3Stage(); break;
	case 5:InitIntro4Stage(); break;
	}

	while( 1 )
	{
		// The stage
		UpdateStage();

		// Update psg
		UpdatePSG();
	}
}