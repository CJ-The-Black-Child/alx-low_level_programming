#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point. This is the main function
 * Description: Prints out the alphabet in lowercase followed by a new line
 * Return: to always return 0 for success
 */
int main(void)
{
	char alpha_bet;

	for (alpha_bet = 'a'; alpha_bet <= 'z'; alpha_bet++)
	{
		if (alpha_bet != 'e' && alpha_bet != 'q')
			putchar(alpha_bet);
	}
	putchar('\n');

	return (0);
}
