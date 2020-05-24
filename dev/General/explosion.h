// Init explosion sprite
void InitExplosionSprite()
{
	// Explosion sprite
	LoadSprite( littleexplosion_psgcompr, LITTLEEXPLOSIONBASE, littleexplosion_psgcompr_bank );
	LoadSprite( bigexplosion_psgcompr, BIGEXPLOSIONBASE, bigexplosion_psgcompr_bank );
}

// Create a explosion
void InitExplosion( unsigned char x, unsigned char y, unsigned char t )
{
	explosion *ex;

	if( numexplosions < MAXEXPLOSIONS )
	{
		// Get
		ex = &explosions[ numexplosions ];

		// Data
		ex->explosionposx = x;
		ex->explosionposy = y;
		ex->explosionsprite = 0;
		ex->explosiontype = t;

		// Increase
		numexplosions++;

		// Sound
		if( t != 0 )
			PlaySound( ( unsigned char * ) explosion_psg, 1 );
	}
}

// Init all explosions
void InitExplosions()
{
	InitExplosionSprite();
	numexplosions = 0;
	spawnedexplosiontime = 0;
}
