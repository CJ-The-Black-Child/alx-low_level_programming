#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * Return- to always return 0 for success
 */
int main(void)
{
	char alpha_bet, a, b;

	a = 'e';
	b = 'q';
	for (alpha_bet = 'a'; alpha_bet <= 'z'; alpha_bet++)
	{
		if (alpha_bet != a && alpha_bet != b)
			putchar(alpha_bet);
	}
	printf("\n");
	return (0);
}
