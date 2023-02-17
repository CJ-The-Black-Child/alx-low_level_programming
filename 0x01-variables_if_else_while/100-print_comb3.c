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
int i, j;
for (i = 0 ; i <= 9 ; i++)
{
	for (j = i + 1; j <= 9; j++)
	{
	putchar(i + '0');
	putchar(j + '0');
if (i == 8 && j == 9)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
