#include "main.h"

/**
* printing_numbers - It is a function that prints numbers from 0 to 9.
* Return: It returns 0 to 9 after which a new line is made.
*/

void print_numbers(void);
{
int j;
for (j = 0; j < 10; j++)
<<<<<<< HEAD
{
_putchar(j);
}
=======
_putchar(j + '0');
>>>>>>> c5bfa3c7411c3890df4ae89d41924a67d0df7363
_putchar('\n');
}
