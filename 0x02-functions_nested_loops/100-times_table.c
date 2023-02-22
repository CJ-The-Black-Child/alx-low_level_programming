/**
* File: 100-times_table.c
*/
#include "main.h"
/**
* print_times_table - Prints the n times table, starting with 0
*
* @n: The values of the times table to be printed.
*
* This function prinst the times table from 0 to n, where each
* row represents the products of the values from 0 to n with the
* row numbers. For example, if n is for 5, the output will be:
*
* 0 0 0 0 0 0
* 0 1 2 3 4 5
* 0 2 4 6 8 10
* 0 3 6 9 12 15
* 0 4 8 12 16 20
* 0 5 10 15 20 25
*
* Return: void
*/
void print_times_table(int n)
{
int i, j, product;

if (n < 0 || n > 15)
return;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
product =  i * j;
if (j > 0)
{
_putchar(',');
_putchar(' ');
}

if (product < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(product + '0');
}
else if (product < 100)
{
_putchar(' ');
_putchar(product / 10 + '0');
_putchar(product % 10 + '0');
}
else
{
_putchar(product / 100 + '0');
_putchar((product / 10) % 10 + '0');
_putchar(product % 10 + '0');
}
}
_putchar('\n');
}
}

