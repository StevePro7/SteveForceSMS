// Load player sprite
void InitEnemyshootSprites()
{
	LoadSprite( enemyshoot_psgcompr, ENEMYSHOOTBASE, enemyshoot_psgcompr_bank );
}

void InitEnemyshoots()
{
	InitEnemyshootSprites();
	numenemyshoots = 0;
}