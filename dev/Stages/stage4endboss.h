void DoEnemyWait( enemy *en, unsigned char nxt )
{
	if( en->enemyframe >= 30 )
	{
		en->enemyparama = nxt;
		en->enemyframe = 0;
	}
}