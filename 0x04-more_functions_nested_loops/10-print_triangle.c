#include "main.h"

/**
 * print_triangle - program that prints a triangle
 *
 * @size: parameter
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j <= size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= 1; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
