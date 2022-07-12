#include "main.h"
#include <stdio.h>

/**
 * print_array - Function that prints elements of an array
 * @a: Arrays of integers
 * @n: Number of elements of the array
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
int c;

for (a = 0; c < n; c++)
{
printf("%d", a[c]);

if (c == n - 1)
continue;
printf(", ");
}
printf("\n");
}
