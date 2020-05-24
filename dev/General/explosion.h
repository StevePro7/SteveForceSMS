// Init explosion sprite
void InitExplosionSprite()
{
	// Explosion sprite
	LoadSprite( littleexplosion_psgcompr, LITTLEEXPLOSIONBASE, littleexplosion_psgcompr_bank );
	//LoadSprite( bigexplosion_psgcompr, BIGEXPLOSIONBASE, bigexplosion_psgcompr_bank );
}


// Init all explosions
void InitExplosions()
{
	InitExplosionSprite();
	numexplosions = 0;
	spawnedexplosiontime = 0;
}
