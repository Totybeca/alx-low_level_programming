#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: The string to search.
 * @needle: Substring to locate.
 * Return: If the substring is located, point a pointer to the beginning
 * if not, NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}

