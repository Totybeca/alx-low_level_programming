#include "main.h"
/**
 * _strcpy -  function that copies the string pointed to by src
 * @dest: Where to copy the string to.
 * @src: The source
 * Return: A pointer
 */
char *_strcpy(char *dest, char *src)
{
int var = 0;

for (; src[var] != '\0'; var++)
{
dest[var] = src[var];

}
return (dest);
}

