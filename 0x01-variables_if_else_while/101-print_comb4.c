#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Uses three nested for loops, with each loop iterating
 * over the characters 0 to 9 whcih represents the digits. The program
 * prints only combinations where the digits are in increasing order
 * and where each digit is different from the others.
 *
 * Return: returns 0 for success
 */
int main(void)
{
	int c, i, k;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (c < i && i < k)
				{
					putchar(c);
					putchar(i);
					putchar(k);
					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
