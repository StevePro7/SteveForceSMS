#include "main.h"

void main()
{
	devkit_SMS_displayOff();
	devkit_SMS_setSpritePaletteColor( 0, 3, 3, 3 );
	devkit_SMS_displayOn();
	while(1)
	{
		devkit_SMS_waitForVBlank();
	}
}
