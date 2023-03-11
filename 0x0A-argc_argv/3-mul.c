#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to a string(s)
 * Return: 0 if no errors, else 1
 */

int main(int argc, char *argv[])
{
int a, b, product;
if (argc != 3)
{
puts("Error");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
product = a *b;
printf("%d\n", product);
return (0);
}
