void InitScripts()
{
	numscripts = 0;
}

void InitScript( unsigned char *scripter, unsigned char **labels )
{
	script *sc;

	if( numscripts < MAXSCRIPTS )
	{
		// Get script
		sc = &scripts[ numscripts++ ];

		// Data
		sc->scripterpass = 0;
		sc->scripterframe = 0;
		sc->scripterscript = scripter;
		sc->scripterlabels = labels;
		sc->scripterloop = -1;
	}
}