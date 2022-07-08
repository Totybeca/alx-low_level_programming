#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'
 */
void print_triangle(int size)
{
	 int b;
	 int c;
	 int d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c <= (size - 1); c++)
		{
			for (b = 0; b < (size - 1) - c; b++)
			{
				_putchar(' ');
			}
			for (d = 0; d <= c; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

