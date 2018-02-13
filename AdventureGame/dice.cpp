#include "stdafx.h"
#include "dice.h"

int do_random(int top)
{
	/* initialize random seed: */
	srand(time(NULL));

	return rand() % top + 1;
}

int roll_four()
{
	return do_random(4);
}

int roll_six()
{
	return do_random(6);
}

int roll_eight()
{
	return do_random(8);
}

int roll_ten()
{
	return do_random(10);
}

int roll_twelve()
{
	return do_random(12);
}

int roll_twenty()
{
	return do_random(20);
}

int roll_hundred()
{
	return do_random(100);
}

