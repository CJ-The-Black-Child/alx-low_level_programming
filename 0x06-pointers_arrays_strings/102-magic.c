#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program initializes an array and a pointer,
 * updates the value of an integer variable using pointer arithmetic,
 * and finally prints the value of an array element.
 *
 * Return: Always  (Success)
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	*((int *)p + 10) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
	/*
	* write your line of code here...
	* Remember:
	* - you are not allowed to use a
	* - you are not allowed to modify p
	* - only one statement
	* - you are not allowed to code anything else than this line of code
	*/

