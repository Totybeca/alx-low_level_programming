#include <stdio.h>
#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The pointer that sets to char.
 * @to: The char.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

