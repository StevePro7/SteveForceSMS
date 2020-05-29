void InitPlayerConstants()
{
	playerspeed = DEFAULTPLAYERSPEED;
	playershootlevel = 0;
	playershootmax = MAXPLAYERSHOOTS - 1;
	playercounter = 0;
	playershootcounter = 0;
}


// Load player sprite
void InitPlayerSprite()
{
	LoadSprite( player_psgcompr, PLAYERBASE, player_psgcompr_bank );
}

