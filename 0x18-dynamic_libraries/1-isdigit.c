#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* _isdigit - It is a function that checks for digits
* @c: input
* Return: 1 if c is a digit , return 0 if not.
*/
int _isdigit(int c)
{
int a = 0;
if (isdigit(c))
{
a = 1;
}
return (a);
}