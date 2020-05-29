

// Hearts
void UpdatePlayerIndicators()
{
	unsigned char a;
	for( a = 0; a < numplayers; a++ )
		devkit_SMS_addSprite( 240 - a * 8, 4, PLAYERINDICATORBASE );
}

// Init a player
void InitPlayer()
{
	// Constants
	playerx = 128;
	playery = 200;
	playertype = 1;
	playercounter = 0;
}

// Load player sprite
void InitPlayerSprite()
{
	LoadSprite( player_psgcompr, PLAYERBASE, player_psgcompr_bank );
}

// Draw player sprite
void DrawPlayer()
{
	// Player sprite
	DrawQuadSprite( playerx, playery, PLAYERBASE + playerside );

	// Propulsion
	devkit_SMS_addSprite( playerx + 4, playery + 16, PLAYERBASE + 12 + sprite82anim );
}

void UpdatePlayerState1()
{
	playery--;
	if( playery < 150 )
	{
		playertype = 2;
		playercounter = 0;
	}
	DrawPlayer();
}

// Update player status
void UpdatePlayer()
{
	// Counter
	playercounter++;

	// Side by default
	playerside = 0;

	// State
	changeBank( FIXEDBANKSLOT );
	( *( playerupdatefunctions[ playertype ] ) )( );
}

void InitPlayerConstants()
{
	playerspeed = DEFAULTPLAYERSPEED;
	playershootlevel = 0;
	playershootmax = MAXPLAYERSHOOTS - 1;
	playercounter = 0;
	playershootcounter = 0;
}