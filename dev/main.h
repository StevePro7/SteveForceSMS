#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "devkit\_sms_manager.h"
#include "devkit\_snd_manager.h"

// LIBRARIES.
#include "defines.h"					// DONE
#include "Banks\fixedbank.h"			// DONE
#include "vars.h"						// DONE
#include "funcs.h"						// DONE

#include "General\timeredlabel.h"		// DONE
#include "General\map.h"				// DONE
#include "General\scroller.h"			// DONE
#include "General\barrom.h"				// DONE
#include "General\explosion.h"			// DONE
#include "General\warning.h"			// DONE
#include "Intros\introovni.h"
#include "Intros\introsideplayer.h"
//#include "Intros\introstar.h"
#include "Intros\intro3object.h"

#include "General\waveship.h"			// DONE
#include "General\rectship.h"			// DONE
#include "General\bombship.h"			// DONE
#include "General\spreadship.h"			// DONE
//#include "Stages\stage4middleboss.h"
//#include "Stages\stage4endboss.h"
//#include "Stages\stage4endbossb.h"
//#include "Stages\stage4object.h"
//#include "Stages\stage2object.h"
#include "Wars\ww2plane.h"				// DONE
#include "Wars\ww2planeb.h"				// DONE
#include "Wars\ww2zeppelin.h"			// DONE
#include "Wars\ww2ship.h"				// DONE
//#include "Stages\stage5missile.h"
//#include "Stages\stage5endboss.h"
#include "Fortresses\fortressphantom.h"	// DONE
#include "Fortresses\fortresssearcher.h"// DONE
#include "Fortresses\fortresswave.h"	// DONE
#include "Fortresses\fortresscannon.h"	// DONE
#include "Fortresses\fortressdoor.h"	// DONE
//#include "Stages\stage1middlebossc.h"
//#include "Stages\stage1middlebossb.h"
//#include "Stages\stage1middleboss.h"
//#include "Stages\stage1endboss.h"
#include "Monsters\monsterblob.h"		// DONE
#include "Monsters\monstermissil.h"		// DONE
#include "Monsters\monsterhead.h"		// DONE
#include "Vulcans\vulcanstation.h"		// DONE
#include "Vulcans\vulcantank.h"			// DONE
#include "Vulcans\vulcanvulcan.h"		// DONE
#include "Vulcans\vulcanlava.h"			// DONE
#include "Vulcans\vulcanbird.h"			// DONE
#include "Vulcans\vulcanlaser.h"		// DONE
//#include "Stages\stage2endboss.h"
#include "Spaces\spacestation.h"		// DONE
#include "Spaces\spaceasteroid.h"		// DONE
#include "Spaces\spaceshooter.h"		// DONE
//#include "Stages\stage3laser.h"
//#include "Stages\stage3endboss.h"
#include "Stages\stage3star.h"
//#include "Stages\stage6endboss.h"
//#include "Stages\stage6endbossb.h"
//#include "Stages\stage6object.h"
#include "General\skullbone.h"			// DONE
#include "General\turnship.h"			// DONE
//#include "Stages\stage8lateral.h"
//#include "Stages\stage8bossa.h"
//#include "Stages\stage8bossb.h"
//#include "Stages\stage8bossc.h"
#include "General\rsgthing.h"			// DONE

#include "Enemies\enemy.h"				// DONE
#include "General\scripter.h"			// DONE
#include "General\mikgamesstage.h"		// DONE
#include "General\logostage.h"			// DONE
#include "General\jukeboxstage.h"		// DONE
#include "Intros\intro1stage.h"
#include "Intros\intro2stage.h"
#include "Intros\intro3stage.h"
#include "Intros\intro4stage.h"
#include "General\finishstage.h"		// DONE
#include "Intros\introstage.h"

#include "General\selectorstage.h"		// DONE
#include "General\gameoverstage.h"		// DONE
//#include "Stages\stage1.h"
//#include "Stages\stage2.h"
//#include "Stages\stage3.h"
//#include "Stages\stage4.h"
#include "Stages\stage5.h"
//#include "Stages\stage6.h"
//#include "Stages\stage7.h"
//#include "Stages\stage8.h"
#include "Enemies\enemyshoot.h"			// DONE
#include "Players\playershoot.h"		// DONE
#include "General\powerup.h"			// DONE
#include "Players\player.h"				// DONE
#include "Players\playstage.h"


// FOLDERS complete
// Enemies
// Fortresses
// General
// Intros			// TODO
// Monsters
// Players
// Spaces
// Stages			// TODO
// Vulcans
// Wars				// TODO
