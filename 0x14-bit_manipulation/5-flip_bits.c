#include "main.h"

/**
 * flip_bits - Counts the number of bits needed
 * to be flipped to get from one number to another number
 * @n: The first number
 * @m: The second number
 * Return: The necessary number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_val = n ^ m;
	unsigned long bits_flipped = 0;

	/* counts the number of flipped bits using bitwise operations  */
	while (xor_val > 0)
	{
		bits_flipped += (xor_val & 1);
		xor_val >>= 1;
	}
	return (bits_flipped);
}
