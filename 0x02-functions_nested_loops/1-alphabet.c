#include <stdio.h>
/**
* main - Entry point
*
* Return: always 0 (success)
* print_alphabet
*/
void print_alphabet(void)
{
char i = 'a';
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}
