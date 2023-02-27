#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
/**
 * main - print password. Generates a random valid password for the program
 *
 * Return: Always 0.
 */

int main(void)
{
	int ascii_sum = 2772;
	int password_index = 0;
	int random_value;
	char password[100];
	time_t t;

	/* seeds the random number generator */
	srand((unsigned) time(&t));
	
	/* generate random characters till the sum of the ASCII is less 2772 */
	do {
		random_value = rand() % (CHAR_MAX + 1);
		password[password_index] = random_value;
		ascii_sum -= random_value;
		password_index++;
	}
	while (ascii_sum > 0);

	/* add the final character to the password */
	password_index--;
	password[password_index] += ascii_sum;

	/* print the password */
	for (int i = 0; i <= password_index; i++)
	{
		printf("%c", password[i]);
	}
	printf("\n");
	return (0);
}
