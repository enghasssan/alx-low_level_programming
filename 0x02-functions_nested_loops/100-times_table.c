#include "main.h"

/**
 * print_times_table - fn that prints the n times table from 0
 *
 * @n: input variable
 *
 * Return: Always 0
 */

void print_times_table(int n)
{
	int prod, mult, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (mult = 1; mult <= n; ++mult)
			{
				_putchar(',');
				_putchar(' ');

				prod = mult * num;

				if (prod <= 9)
				{
					_putchar(' ');
				}
				if (prod <= 99)
				{
					_putchar(' ');
				}
				if (prod >= 100)
				{
					_putchar((prod / 100) + 48); /* for the first number */
					_putchar((prod / 10) % 10 + 48); /* for the middle number */
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + 48); /* for the first number */
				}
				_putchar((prod % 10) + 48); /* for the last number */
			}
			_putchar('\n');
		}
	}
}
