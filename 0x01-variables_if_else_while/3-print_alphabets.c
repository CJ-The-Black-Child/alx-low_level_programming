#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 *
 * Return: Always return 0 for success
 */
int main(void)
{
	char alpha_bet;

	for (alpha_bet = 'a'; alpha_bet <= 'z'; alpha_bet++)
		putchar(alpha_bet);
	for (alpha_bet = 'A' ; alpha_bet <= 'Z'; alpha_bet++)
		putchar(alpha_bet);
		putchar('\n');
		return (0);
}
