#include "main.h"
#include <stdio.h>
/**
* main - Entry point
* int print_sign(int n) function that prints the sign of a number.
*
* Return: Always 0 (Success)
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
_putchar('-');
return (-1);
}
