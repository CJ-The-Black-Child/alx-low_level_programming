#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Prints all single digit numbers of base 10
 * separated by a comma followed by a spacae and ends with a new line
 * Return:  will return 0 as success
 */
int main(void)
{
	int d;

	for (d = '0' ; d <= '9' ; d++)
	{
		putchar(d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
