#include <stdio.h>
#include "main.h"
/**
* more_numbers - function to print 0-14 10 times
* putchar only three times
* Return: Numbers from 0-14 10 times followed by a new line
*/
void more_numbers(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
putchar(j);
}
putchar('\n');
}
}