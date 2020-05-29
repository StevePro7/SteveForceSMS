// Load playershootsprites
void InitPlayershootSprites()
{
	LoadSprite( playershoot_psgcompr, PLAYERSHOOTBASE, playershoot_psgcompr_bank );
}

// Update player shoot
void UpdatePlayershoot( unsigned int a )
{
}

// Update all player shoots
void UpdatePlayershoots()
{
	signed char a;

	// Do movement
	if( numplayershoots > 0 )
		for( a = numplayershoots - 1; a >= 0; a-- )
			UpdatePlayershoot( a );
}


void InitPlayershoots()
{
	// Playershoot sprites
	InitPlayershootSprites();

	// Reset counter
	numplayershoots = 0;
}