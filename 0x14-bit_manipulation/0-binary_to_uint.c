#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: pointer to a string containing a bianry number
 * Return: there is 1 or more chars in the string b that is not 0 or 1
 * and b is null.( unsigned int with decimal number value of
 * binary number or 0 if otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int result = 0;
	/* Checks if the binary string is null*/
	if (!b)
		return (0);
	/* Iterate through the binary string then vaidate each characters */
	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}
	{
			/*left shift the previous value by 1 position */
			result <<= 1;
			/* if current bit is 1, add 1 to result */
			if (b[index] == '1')
				result += 1;
	}
		return (result);

}
