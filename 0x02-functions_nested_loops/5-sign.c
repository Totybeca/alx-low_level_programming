#include "main.h"
#include <stdio.h>
/**
 *  function that prints the sign of a number.
 * 
 * Return: 0
 */
int print_sign(int n)
{
if(n > 0)
{
putchar('+');
return (1);
}
else if(n == 0)
{
putchar('0');
return (0);
}
else if(n < 0)
{
putchar('_');
return (-1);
}
}
