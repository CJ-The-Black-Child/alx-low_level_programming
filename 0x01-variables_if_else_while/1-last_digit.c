#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - this contains the entry point
 *
 * Return: if 0, then its treated as success
 */
int main(void)
{
	int n, ID;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ID = n % 10;
	if (ID > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ID);
	}
	else if (ID == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ID);
	}
	return (0);
}
