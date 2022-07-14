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
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];
return (dest);
}

