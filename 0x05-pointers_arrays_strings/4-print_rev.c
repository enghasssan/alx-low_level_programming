#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: array parameter of string char
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;
	int b;

	while (s[i] != '\0')
	{
		i++;
	}
	for (b = i; b >= 0; b--)
	{
		_putchar(s[b] + 0);
	}
	_putchar('\n');
}
