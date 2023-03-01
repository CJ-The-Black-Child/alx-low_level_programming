#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer thatsgoing to be printed
 */
void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)

	{
		_putchar('-');
		number = -number;
	}
	if ((number / 10) > 10)
		print_number(number / 10);

	_putcahr((number % 10) + '0');
}
