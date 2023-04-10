#include "main.h"

/**
 * get_endianness - Checks the endiness.The fate of the universe hangs
 * in the balance and the only hope lies
 * indetermining the endiness of the system.
 *
 * Return: 0 if the system is big endian, 1 if the system is little endian
 */

int get_endianness(void)
{
	/*
	 * fun coding :)
	 * here I declare ann integer.
	 */

	int n = 1;

	char *endian = (char *)&n;

	if (*endian == 1)
		return (1);

	return (0);

}
