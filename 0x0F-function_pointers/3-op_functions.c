#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of 2 numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The difference of the 2 numbers a and b previously assigned
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the prodcut of 2 numbers
 * @a: The first number
 * @b: the second number
 *
 * Return: The product of 2 numbers that were assigned values earlier on.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of 2 numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The quotient of the 2 numbers assigned to a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of 2 numbers.
 * @a: The first number
 * @b: The second number
 *
 * Return: The remainder of the division of a and b previously assigned.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
