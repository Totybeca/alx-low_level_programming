#include "main.h"
/**
 * _memset - This function fills memmory with a constant byte
 * @s: Memeory area to be filled
 * @b: Char to copy
 * @n: Number of times to copy b
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

