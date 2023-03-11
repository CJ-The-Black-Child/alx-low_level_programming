#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: The number of arguments supplued to the program.
 * @argv: Am array of pointers to the arguments
 *
 * Return: Always 0 for success
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);
	return (0);
}
