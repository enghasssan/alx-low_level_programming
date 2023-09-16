#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * void input
 *
 * Return: void 
 */

void more_numbers(void)
{
	int i;
	int j;
	int count;

	for (j = 1; j <= 10; j++)
	{
		for (count = 0; count <= 14; count++)
		{
			i = count;
			if (count > 9)
			{
				_putchar('1');
				i = count % 10;
			}
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}

