#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Prints all the single digits numbers of base 10
 *
 * Return: will return 0 for success
 */
int main(void)
{
	int d;

	for (d = '0' ; d <= '9' ; d++)
	{
		putchar(d);
	}
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
