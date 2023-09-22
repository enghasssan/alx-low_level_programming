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
	int counter;
	int c;
	int d;

	for (a = 0; str[a] != '\0'; a++)
	{
		counter++;
	}
	c = counter - 1;
	d = c / 2;

	for (a = d + 1; a <= c; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
