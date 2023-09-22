#include "main.h"

/**
 * puts_half - prints 2nd half of a string
 *
 * @str: array parameter
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int a;
	int counter = 0;
	int d;

	for (a = 0; str[a] != '\0'; a++)
	{
		counter++;
	}
	d = ((counter - 1) / 2) + 1;
	for (a = d; a <= counter; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
