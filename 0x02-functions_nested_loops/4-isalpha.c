
#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - function to check for lowercase character
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int _isalpha(int c)
{
int alpha = 0;
if (isalpha(c))
{
alpha = 1;
}
return (alpha);
}
