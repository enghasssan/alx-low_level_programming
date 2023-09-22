#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * @str: string pointer
 *
 * Return: 0 always
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + '0');
		str++;
	}
	_putchar('\n');
}
