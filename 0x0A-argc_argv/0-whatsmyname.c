#include <stdio.h>

/**
 * main - Prints the program name, followed by a new line.
 * @argc: The number of arguments supplued to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
		printf("%s\n", argv[0]);
		return (0);
}
