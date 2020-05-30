void DoCommonBossAppearingFunction( enemy *en )
{
	en->enemyposy++;
	if( en->enemyposy >= 30 )
	{
		en->enemyparama = 1;
		en->enemyframe = 0;
	}
}
