#include "main.h"
#include <stdio.h>
/**
* print_line - It is a function that prints straight line
* @n: input
*/

void print_line(int n)
{

if (n > 0)
{
for (int i = 0; i < n; i++)
{
putchar('_');
}
}
putchar('\n');
}
