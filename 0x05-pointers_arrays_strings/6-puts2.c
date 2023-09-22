#include "main.h"

/**
 * puts2 - fn prints every other char of a string
 *
 * @str: parametar array char
 *
 * Return: 0
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
			_putchar(str[a]);
	}
	_putchar('\n');
}
