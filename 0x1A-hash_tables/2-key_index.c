#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - Get the index of a key in the hash table.
 * @key: The key to calculate the index for.
 * @size: The size of the array in the hash table
 *
 * Return: The index where the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	/* Calculates the hash value using djb2 algorithm */
	hash_value = hash_djb2(key);

	/* Get the index by performung modulo operation on the hash value */
	index = hash_value % size;

	return (index);
}
