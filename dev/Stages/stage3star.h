#define MAXSTAGE3STARS 6
#define MAXSTAGE5CLOUDS 2

typedef struct stage3star
{
	unsigned char posx;
	unsigned char posy;
	unsigned char speed;
}stage3star;
stage3star stage3stars[ MAXSTAGE3STARS ];

void InitStage3Star( stage3star *st, unsigned char speed )
{
	st->posx = 48 + ( myRand() % ( 255 - 48 - 48 - 16 ) );
	st->posy = myRand() % 192;
	st->speed = speed;
}