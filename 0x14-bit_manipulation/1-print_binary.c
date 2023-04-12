#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	/* checks if the number if greater than 1 */
	if (n > 1)
	{
		/*
		 * Recursively call the function with the number
		 * right shifted by 1
		 */
		print_binary(n >> 1);
	}
	/*
	 * prints the current bit by performing a bitwsie AND
	 * with 1 and adding the ASCII value of '0'
	 */
	_putchar((n & 1) + '0');
}
