/**
* File: 100-times_table.c
*/
#include "main.h"
/**
* print_times_table - Prints the times table of the input from 0 to 100 .
*
* @n: The values of the times table to be printed.
*/
void print_times_table(int n)
{
int num, mult, prod;

if (n >= 0 && n <= 15)
{
for (num = 0; num <= n; num++)
{
for (mult = 0; mult <= n; mult++)
{
prod = num * mult;
if (mult == 0)
{
_putchar('0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((prod / 100) + '0');
}
if (prod >= 10)
{
_putchar(((prod /10) % 10)+ '0');
}
else
{
_putchar(' ');
}
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
}
