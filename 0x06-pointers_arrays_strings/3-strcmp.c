#include <stdio.h>
#include "main.h"
/**
 * _strcat - This is a function that concatenates two strings
 * @dest: Accepts the  src string
 * @src: Appends src string to destclear
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int i, n;

for (i = 0; dest[i] != '\0'; i++)
{
}
for (n = 0; (dest[i + n] = *src++) != '\0'; n++)
{
}
return (dest);
}

