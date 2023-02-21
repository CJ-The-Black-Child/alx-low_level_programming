#ifndef MAIN_H_
#define MAIN_H_
/**
 * File:  main.h
 *
 * Description: Header File that contains declaration for all my functions
 *
 *	 used in the directory of 0x02-functions_nested_loops.
 */

int _putchar(char c);
/** print_alphabet -prints out alphabets in lowercase 
 * followed by new line
 */

void print_alphabet(void);

/** Print_alphabet_x10 - prints alphabet ten times
 * followed by new line
 */
void print_alphabet_x10(void);


/**
 * _islower - checks for lowercase 
 * character
 */
int _islower(int c);

/**
 * _isalpha - checks for alphabetic
 *  character
 */
int _isalpha(int c);

/**
 * print_sign - prints the
 *  sign of a number
 */
int print_sign(int n);

/**
 * _abs - computes absolute 
 * value of integer
 */
int _abs(int n);

/**
 * print_last_digit - returns last
 *  digit of a number
 */
int print_last_digit(int);

/**
 * jack_bauer - prints every minute of
 * every day of jack bauer
 */
void jack_bauer(void);

/**
 * times_table - prints the 9 time table
 * starting with 0
 */
void times_table(void);

/**
 * add - adds two integers
 *  and returns result
 */
int add(int, int);

/**
 * print_to_98 - prints all natural numbers 
 * from n to 98 followed by a new line
 */
void print_to_98(int n);
#endif
