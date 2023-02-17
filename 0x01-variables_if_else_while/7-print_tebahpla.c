#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Prints the alphabets in reverse order in lowercase
 *
 * Return: will return 0 for success
 */
int main(void)
{
	char alpha_bet;

	for (alpha_bet = 'z' ; alpha_bet >= 'a' ; alpha_bet--)
		putchar(alpha_bet);
	putchar('\n');
	return (0);
}
