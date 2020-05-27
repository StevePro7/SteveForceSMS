void UpdatePlayStage()
{
	// Change bank
	changeBank( FIXEDBANKSLOT );

	// Custom Update
	( *( updatestagefunctions[ playstage ] ) )( );
}

void InitCustomStageData()
{
	// Metemos aquí la velocidad de los disparos, ya que en alguna fase la retocamos
	playstageshootspeed = DEFAULTENEMYSHOOTSPEED + gamelevel;

	// Change bank
	changeBank( FIXEDBANKSLOT );

	// Custom Init
	( *( initstagefunctions[ playstage ] ) )( );
}

void InitStageData( unsigned int i )
{
	unsigned char *palette_bin;
	unsigned int palette_bin_bank;
	unsigned char *tilemap_l;
	unsigned int tilemap_l_size;
	unsigned char *tilemap_m;
	unsigned char *psg;
	unsigned int psg_bank;
	unsigned char loop_psg;

	// Prevent errors
	changeBank( FIXEDBANKSLOT );

	// Update where we stay
	i <<= 3;

	// Get all data
	palette_bin = ( unsigned char * ) stageinitdata[ i ]; i++;
	palette_bin_bank = ( unsigned int ) ( stageinitdata[ i ] ); i++;
	tilemap_l = ( unsigned char * ) stageinitdata[ i ]; i++;
	tilemap_l_size = ( unsigned int ) ( stageinitdata[ i ] ); i++;
	tilemap_m = ( unsigned char * ) stageinitdata[ i ]; i++;
	psg = ( unsigned char * ) stageinitdata[ i ]; i++;
	psg_bank = ( unsigned int ) ( stageinitdata[ i++ ] );
	loop_psg = ( unsigned int ) ( stageinitdata[ i ] );

	// The bank
	playstagebank = palette_bin_bank;

	// Load palette
	LoadBGPalette( palette_bin, palette_bin_bank );

	// The tilemap
	SetMapLines( tilemap_l, tilemap_l_size, tilemap_m );

	// Init map
	InitMap( palette_bin_bank );

	// Rom bank
	if( psg != 0 )
		PlayMusic( psg, psg_bank, loop_psg );
}

// Pantalla de juego
void InitPlayStage()
{
	// Save continue stage, for continue :)
	laststagenum = stagenum;

	// Init stage
	InitStage();

	// Init script
	InitScripts();

	// Enemies set to 0
	InitEnemies();

	// And enemy shoots
	InitEnemyshoots();

	// Lo volvemos a apagar
	devkit_SMS_displayOff();

	// Scroller
	InitScroller();

	// Barrom
	InitBarrom();

	// Let's fill playstage
	if( stagenum < 6 )
		playstage = 1 + ( ( basestage + stagenum ) % 5 );
	else
		playstage = stagenum;

	// Last but not least, load custom stage data from array data
	InitStageData( stagedatamarks[ playstage - 1 ] );

	// For the stage custom code 
	InitCustomStageData();
}
