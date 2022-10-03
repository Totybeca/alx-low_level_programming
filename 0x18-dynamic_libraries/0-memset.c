
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
int i = 0;
while (n > 0)
{
s[i] = b;
i++;
n--;
}
return (s);
}