#include "main.h"
#include <stdio.h>
/**
* print_diagonal - It is a function that prints diagonal line
* @n: input number of times digonal should be printed
*/

void print_diagonal(int n)
{
if (n > 0)
{
for (int i = 0; i < n; i++)
{
putchar('\\');
}
}
putchar('\n');
}

