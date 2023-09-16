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
	int k;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(i + '0');
		}
		for (k = 0; k < 5; k++)
		{
			_putchar('1');
			_putchar(i + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
