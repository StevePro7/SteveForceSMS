#include "main.h"

void main()
{
	InitConsole();

	devkit_SMS_displayOff();
	devkit_SMS_setSpritePaletteColor( 0, 0, 0, 3 );
	devkit_SMS_displayOn();
	while(1)
	{
		devkit_SMS_waitForVBlank();
	}
}
