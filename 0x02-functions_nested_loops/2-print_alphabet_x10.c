#include "main.h"
/**
* print_alphabet_x10 - function to print abc 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
char j, i;
for (i = 0; i <= 9; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
putchar(j);
}
putchar('\n');
}
}
