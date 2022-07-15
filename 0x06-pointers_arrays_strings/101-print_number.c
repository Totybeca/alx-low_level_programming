#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 * Return: Nothing
 */
void print_number(int n)
{
unsigned int x;

if (n < 0)
{
_putchar('-');
n *= -1;
}

if (x / 10)
print_number(x / 10);

_putchar(x % 10 + '0');
}

