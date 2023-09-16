#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: input variable
 *
 * Return: void 0
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			while (i)
			{
				_putchar(' ');
				i = i - 1;
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
