#include <stdio.h>
#include "main.h"
/**
* more_numbers - function to print 0-14 10 times
*Return: 0
*/
void more_numbers(void)
{
int  j;
int  i;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
putchar(j);
}
putchar('\n');
}
}
