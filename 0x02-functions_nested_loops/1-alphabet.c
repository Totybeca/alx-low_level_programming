#include <stdio.h>
/**
* main - Entry point
* Return: always 0 (success)
* print_alphabet function to print lowercase alphabet
*/

/**
* print_alphabet function to print lowercase alphabet
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
