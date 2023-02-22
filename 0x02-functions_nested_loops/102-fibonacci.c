/*
 * File: 102-fibonacci.c
 */
#include <stdio.h>
/**
 * main - Prints first 50 fibonacci numbers, starting with 1 nad 2,
 * separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int fib[50], i;
fib[0] = 1;
fib[1] = 2;

for (i = 2; i < 50; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}
for (i = 0; i < 49; i++)
{
printf("%d, ", fib[i]);
}
printf("%d\n", fib[49]);
return (0);
}
