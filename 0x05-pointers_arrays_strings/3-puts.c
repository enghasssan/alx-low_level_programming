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
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar('*str');
	}
}
