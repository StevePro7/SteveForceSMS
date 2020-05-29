// Load player sprite
void InitEnemyshootSprites()
{
	LoadSprite( enemyshoot_psgcompr, ENEMYSHOOTBASE, enemyshoot_psgcompr_bank );
}

// Update Enemy shoot
void UpdateEnemyshoot( unsigned int a )
{
}

// Update all Enemy shoots
void UpdateEnemyshoots()
{
	signed char a;
	// For each
	if( numenemyshoots > 0 )
		for( a = numenemyshoots - 1; a >= 0; a-- )
			UpdateEnemyshoot( a );
}

void InitEnemyshoots()
{
	InitEnemyshootSprites();
	numenemyshoots = 0;
}