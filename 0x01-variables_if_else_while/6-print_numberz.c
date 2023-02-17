#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Prints the numbers from 0 to 9
 * Return: will return 0 for success
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
