#include "main.h"

/**
 * swap_int - a function that swaps the value of two intergers
 * @a: is input 1
 * @b: is input 2
 * Return: integers
 */
void swap_int(int *a, int *b)
{
int n;

n = *a;
*a = *b;
*b = n;
}
