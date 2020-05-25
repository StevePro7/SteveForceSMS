void SetMapLines( unsigned char *lines, unsigned int lsize, unsigned char *tiles )
{
	maplines = lines;
	maplineslength = lsize;
	maptiles = tiles;
}

void DrawMap()
{
	int a, b, c;

	// To cache things
	a = mappositiony >> 5;

	// Change bank if needed
	changeBank( mapbank );

	// Draw all lines
	for( b = 0; b < 28; b++ )
	{
		c = ( b + a ) % maplineslength;
		c = maplines[ c ];
		devkit_SMS_loadTileMap( 0, b, maptiles + ( c << 6 ), 64 );
	}

	// Saving old position
	oldmappositiony = mappositiony;

	// Reset scroll
	devkit_SMS_setBGScrollX( 0 );
	devkit_SMS_setBGScrollY( 0 );
}

void InitMap( unsigned char mb )
{
	mappositionx = 0;
	mappositiony = ( maplineslength << 5 ) - ( 28 << 5 );
	mapbank = mb;
	mapstatics = 0;
	DrawMap();
}