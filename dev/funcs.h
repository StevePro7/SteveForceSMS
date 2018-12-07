
// Change bank
void changeBank(unsigned char b)
{
	if(b!=lastbank)
	{
		SMS_mapROMBank(b);
		lastbank=b;
	}
}

void InterruptHandler(void)
{
	numinterrupts++;
}

// Inicia la consola
void InitConsole()
{
	// La consola
	SMS_init();

	// We need this
	SMS_getKeysStatus();

	// Advanced frameskipping
	SMS_setLineInterruptHandler(&InterruptHandler);
	SMS_setLineCounter (192);
	SMS_enableLineInterrupt();

	// Kagesan asked for this ;)
	SMS_VDPturnOnFeature(VDPFEATURE_LEFTCOLBLANK);
}

// Clear background
void fillBackground()
{
	unsigned int a;

	SMS_setNextTileatXY (0,0);
	for(a=0;a<(32*28);a++)
		SMS_setTile (0);
}

// Limpia la pantalla
void ClearScreen()
{
	// Los sprites
	SMS_initSprites(); 
	SMS_finalizeSprites(); 
	SMS_copySpritestoSAT(); 

	// Fill background
	fillBackground();

	// El background
	SMS_setBackdropColor(0);
}

// Limpia las tiles
void ClearTiles()
{
	SMS_VRAMmemset(0,0,32*256);
}

// Carga la fuente
void LoadFont()
{
	// Rom bank
	changeBank(font_psgcompr_bank);
	
	// Font
	SMS_loadPSGaidencompressedTiles(font_psgcompr,192);
}

void InitStage()
{
	// Sonido quitado
	PSGStop();
	PSGSFXStop();

	// Reseteamos el estado de pausa
	SMS_resetPauseRequest();

	// Iniciamos las frames
	stageframe=0;

	// Clear screen
	ClearScreen();

	// Fill all tiles
	ClearTiles();

	// The font
	LoadFont();
}