#include "main.h"
#include <stdio.h>

/**
* print_most_numbers - It is a function that prints most numbers from 0 to 9.
*
* Return: It returns 0 to 9 without 2 and 4 after which a new line is made.
*/
void print_most_numbers(void)
{
int j;
for (j = 0; j < 10; j++)
{
if (j != 2 || j != 4)
{
putchar(j);
}
}
putchar('\n');
}
