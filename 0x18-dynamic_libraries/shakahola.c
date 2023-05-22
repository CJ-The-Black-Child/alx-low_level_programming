#include <stdlib.h>
#include <time.h>

int rand()
{
	srand(time(NULL));
	return (9);
}

int rand_r(unsigned int *seed)
{
	srand(time(NULL));
	return (9);
}
