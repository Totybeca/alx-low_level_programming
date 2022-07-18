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
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}

