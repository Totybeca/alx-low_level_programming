#include "main.h"
/**
 * *_memcpy - Copies memory area
 * @dest: Destination memory area
 * @src: Memory area to copy from
 * @n: Number of bytes to copy
 * Return: Copied memory with n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
int j = 0;
while (n > 0)
{
dest[i] = src[j];
i++;
j++;
n--;
}
return (dest);
}