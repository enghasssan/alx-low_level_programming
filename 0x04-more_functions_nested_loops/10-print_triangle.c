#include "main.h"

/**
 * print_triangle - prints a right-angled triangle
 *
 * @size: input variable of height of triangle
 *
 * Return: Void 0
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}

