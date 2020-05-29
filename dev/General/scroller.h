void InitScroller()
{
	numscrolls = 0;
	scrollactspeedx = 0;
	scrollactspeedy = 0;
	scrollact = 0;
	disablescroll = 0;
	scrolltimes = 0;
}

void AddScrollers( signed int *scr, unsigned char num )
{
	scrolls = ( scroll * ) scr;
	numscrolls = num;
}

void UpdateScroller()
{
	scroll *sc;

	if( disablescroll == 0 )
	{
		// The bank
		changeBank( FIXEDBANKSLOT );

		// Get scroll
		sc = &scrolls[ scrollact ];
	}
}

void updatescrollact()
{
	scrollact++;
	scrolltimes = 0;
}