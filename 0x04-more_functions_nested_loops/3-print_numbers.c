#include "main.h"
#include <stdio.h>

/**
* printing_numbers - It is a function that prints numbers from 0 to 9.
*
* Return: It returns 0 to 9 after which a new line is made.
*/

void print_numbers(void);
{
int j;
for (j = 0; j <= 9; j++)
{
_putchar(j + '0');
_putchar('\n');
}
}