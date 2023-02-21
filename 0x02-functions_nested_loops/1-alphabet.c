#include "main.h"
/**
 * File: 1-alphabet.c
 *  prints the alphabet in lowercase,followed by a new line
 *
 * Return: Function returns 0
 */
void print_alphabet(void)

{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
