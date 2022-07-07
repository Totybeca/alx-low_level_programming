#include "main.h"
#include <stdio.h>

/**
* print_diagonal - function to print diagonal line
* @n:  is the int that will use for the argument of the function
*/

void print_diagonal(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
putchar('\\');
}
}
putchar('\n');
}
