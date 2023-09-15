#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * void input
 *
 * Return: void 0
 */

void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(i + 48);
		}
		for (i = 0; i < 5; i++)
		{
			_putchar(49);
			_putchar(i + 48);
		}
		_putchar('\n');
	}
}
