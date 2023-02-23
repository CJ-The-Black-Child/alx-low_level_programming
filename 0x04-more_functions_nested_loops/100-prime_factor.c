#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)

{
	long int num =612852475143;
	long int i, max_factor;

	/* divide the number by odd integers */
	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			num /= i;
			max_factor = i;
		}
	}
	/* If the remaining number is greater than 2, it is also a factor */
	if (num > 2)
		max_factor = num;

	printf("%ld\n", max_factor);

	return (0);
}
