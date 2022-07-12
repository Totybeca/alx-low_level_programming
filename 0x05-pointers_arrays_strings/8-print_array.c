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
int j;
for (j = 0; j < n; j++)
{
printf("%d", a[j]);
if (j != (n -1))
{
printf(",");
}
}
}

