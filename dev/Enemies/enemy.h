// Create a enemy
void InitEnemy( unsigned char x, unsigned char y, unsigned char t )
{
	enemy *en;

	if( numenemies < MAXENEMIES )
	{
		// Get enemy
		en = &enemies[ numenemies ];

		// Data
		en->enemyposx = x;
		en->enemyposy = y;
		en->enemytype = t;
		en->enemyframe = 0;
		en->enemyparama = 0;
		en->enemyparamb = 0;
		en->enemywidth = enemieswidth[ t ];
		en->enemyheight = enemiesheight[ t ];
		en->enemyenergy = enemiesenergy[ t ];

		// Easy fix
		if( ( en->enemyenergy > 100 ) && ( en->enemyenergy < 255 ) && ( gamelevel == 0 ) )en->enemyenergy -= 30;

		// Increase
		numenemies++;

		// Init
		if( initenemyfunctions[ t ] != 0 )
			( *( initenemyfunctions[ t ] ) )( en );
	}
}

// Init all enemys
void InitEnemies()
{
	numenemies = 0;
}
