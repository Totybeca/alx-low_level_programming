#include "main.h"
#include <stdio.h>

/**
 * print_square - A function that prints a square, and then a new line
 * @size: Size of the square
 * Return: A square of '#'
 */
void print_square(int size)
{
int i, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
			for (k = 2; k <= size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

