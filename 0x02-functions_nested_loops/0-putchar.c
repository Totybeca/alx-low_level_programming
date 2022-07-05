#include <stdio.h>
/**
* main - Entry point
*
* Return: always 0 (success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
_putchar("_putchar");
_putchar("\n");
return (0);  

}
