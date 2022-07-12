#include "main.h"
/**
 * _strcpy -  function that copies the string pointed to by src
 * @dest: Where to copy the string to.
 * @src: The source
 * Return: A pointer
 */
char *_strcpy(char *dest, char *src)

{
int index = 0;

while (src[index])
{
dest[index] = src[index];
index++;
}

return (dest);
}

