#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: its a pointer
 * @index: The number to get the value at - indices start at 0
 * Return: if an error occurs --1. otherwise - the value of a bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* checks if index is out of bounds */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* checks if the bot at index is 0 */
	if ((n & (1 << index)) == 0)
		return (0);
	/* bit at index is 1*/
	return (1);
}
