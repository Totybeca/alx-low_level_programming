#include "main.h"

/**
 * _isupper - It is a function that checks if a character is uppercase
 * @c: input
 * Return: 1 if c is uppercase , return 0 if not.
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);
}
