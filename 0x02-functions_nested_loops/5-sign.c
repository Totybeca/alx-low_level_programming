#include "main.h"
#include <stdio.h>
/**
 *  print_sign(int n) function that prints the sign of a number.
 * 
 * Return: 0
 */
int print_sign(int n)
{
if(n > 0)
{
 _putchar('+');
return (1);
}
else if(n == 0)
{
return (0);
}
return (-1);  
}
