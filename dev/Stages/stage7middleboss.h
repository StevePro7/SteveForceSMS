void DoAracPatternMovement( enemy *en, const unsigned char *mx, const unsigned char *my, const unsigned int *mt )
{
	// Move
	en->enemyposx += mx[ en->enemyparamb ] - 4;
	en->enemyposy += my[ en->enemyparamb ] - 4;

	if( en->enemyframe >= mt[ en->enemyparamb ] )
	{
		en->enemyparama++;
		en->enemyframe = 0;
		en->enemyparamb++;
		en->enemyparamb %= 8;
	}
}
