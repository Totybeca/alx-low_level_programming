#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: Destination memory area
 * @src: Memory area to copy from
 * @n: Number of bytes to copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

