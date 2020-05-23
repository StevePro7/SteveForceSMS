void UpdatePlayStage()
{
	// Change bank
	changeBank( FIXEDBANKSLOT );

	// Custom Update
	( *( updatestagefunctions[ playstage ] ) )( );
}