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
int len = 0;
int i;
while (dest[len])
len++;
for(i = 0; src[i] != 0; i++)
{
dest[len] = src[i];
len += 1;
}
dest[len] = '\0';
return (dest);
}

