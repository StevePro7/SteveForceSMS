void InitStage5()
{
	unsigned char a;

	// Load tiles
	LoadTiles( stage5tiles_psgcompr, stage5tiles_psgcompr_bank );

	// Sprites
	InitStageSprites( stage5spriteslist, 6 );
}