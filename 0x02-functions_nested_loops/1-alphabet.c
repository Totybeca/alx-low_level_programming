#include <stdio.h>
/**
* main - Entry point
*
* print alphabet function abc
*
* Return: always 0 (success)
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
