#ifndef _FUNCS_H_
#define _FUNCS_H_

#include "vars.h"
#include "devkit\_sms_manager.h"
#include "devkit\_snd_manager.h"
#include "banks\bank2.h"
#include "banks\fixedbank.h"

// Eah que no existen en la libreria
#define max(x, y) (((x) > (y)) ? (x) : (y))
#define min(x, y) (((x) < (y)) ? (x) : (y))
#define sign(x) (x > 0) ? 1 : ((x < 0) ? -1 : 0)
#define sinus(x) (sinustable[(x)%256]-128)


// Fast random package
unsigned long state = 777;
char myRand()
{
	state = state * 1664525 + 1013904223;
	return state >> 24;
}

// Change bank
void changeBank( unsigned char b )
{
	if( b != lastbank )
	{
		devkit_SMS_mapROMBank( b );
		lastbank = b;
	}
}



// Carga paleta por defecto
void LoadSpritePalette()
{
	// Rom bank
	changeBank( FIXEDBANKSLOT );

	// Palette
	devkit_SMS_loadSpritePalette( (unsigned char *)palette_bin );
}

// Limpia las tiles
void ClearTiles()
{
	devkit_SMS_VRAMmemset( 0, 0, 32 * 256 );
}

// Carga la fuente
void LoadFont()
{
	// Rom bank
	changeBank( font_psgcompr_bank );

	// Font
	devkit_SMS_loadPSGaidencompressedTiles( font_psgcompr, 192 );
}

void InterruptHandler( void )
{
	numinterrupts++;
}

// Clear background
void fillBackground()
{
	unsigned int a;

	devkit_SMS_setNextTileatXY( 0, 0 );
	for( a = 0; a < ( 32 * 28 ); a++ )
		devkit_SMS_setTile( 0 );
}

// Limpia la pantalla
void ClearScreen()
{
	// Los sprites
	devkit_SMS_initSprites();
	devkit_SMS_finalizeSprites();
	devkit_SMS_copySpritestoSAT();

	// Fill background
	fillBackground();

	// El background
	devkit_SMS_setBackdropColor( 0 );
}

void InitConsole()
{
	// La consola
	devkit_SMS_init();

	// We need this
	devkit_SMS_getKeysStatus();

	// Advanced frameskipping
	devkit_SMS_setLineInterruptHandler( &InterruptHandler );
	devkit_SMS_setLineCounter( 192 );
	devkit_SMS_enableLineInterrupt();

	// Kagesan asked for this ;)
	devkit_SMS_VDPturnOnFeature( devkit_VDPFEATURE_LEFTCOLBLANK() );
}

// Update del scroll
void UpdateScroll( signed int sx, signed int sy )
{
	devkit_SMS_setBGScrollX( sx );
	devkit_SMS_setBGScrollY( sy );
}


// Inicia una stage
void InitStage()
{

	// Sonido quitado
	devkit_PSGStop();
	devkit_PSGSFXStop();

	// Reseteamos el estado de pausa
	devkit_SMS_resetPauseRequest();

	// Iniciamos las frames
	stageframe = 0;

	// Clear screen
	ClearScreen();

	// Fill all tiles
	ClearTiles();

	// The font
	LoadFont();

	// El valor del scroll
	UpdateScroll( 0, 0 );

	// Default palettes
	LoadSpritePalette();

	// Enable VDP
	devkit_SMS_displayOn();

	// Disable playstage update
	updateplaystage = 0;

	// Init magic
	numinterrupts = 0;
}

#endif//_FUNCS_H_
