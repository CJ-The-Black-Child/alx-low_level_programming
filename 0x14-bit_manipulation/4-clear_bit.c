#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: A pointer to the number
 * @index: is the index to set the value at - indices starts at 0
 * Return: if an error occurs then --1 otherwise we have -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Checks if index is out of bounds */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Clear bit at index to 0 */
	*n &= ~(1 << index);

	return (1);
}
