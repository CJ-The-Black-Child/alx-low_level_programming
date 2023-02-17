#include <stdio.h>

/**
 * main - Entry Point
 *
 *Description: Prints all digits of base 10, followed by all
 * lowercase letters of base 16
 *
 * Return:  will return 0 for success
 */
int main(void)
{
	int num;
	char base_16;

	for (num = '0'; num <= '9'; num++)
	putchar(num);
	for (base_16 = 'a'; base_16 <= 'f'; base_16++)
		putchar(base_16);
	putchar('\n');
	return (0);
}
