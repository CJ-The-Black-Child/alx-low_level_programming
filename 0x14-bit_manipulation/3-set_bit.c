#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1.
 * @n: a pointer to the number
 * @index: The index to set the value at - indices starts at 0
 * Return: if an error occurs --1 otherwise -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is out of bounds */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/* set bit at index to 1*/
	*n |= (1 <<index);
	return (1);
}
