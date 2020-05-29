// Load playershootsprites
void InitPlayershootSprites()
{
	LoadSprite( playershoot_psgcompr, PLAYERSHOOTBASE, playershoot_psgcompr_bank );
}

void InitPlayershoots()
{
	// Playershoot sprites
	InitPlayershootSprites();

	// Reset counter
	numplayershoots = 0;
}