#include "main.h"

/**
 * print_number - fn. prints an integer
 *
 * @n: input variable
 *
 * Return: always 0 success
 */

void print_number(int n)
{
	if (n >= 0)
	{
		_putchar(n + '0');
	}
	else
	{
		n = n * -1;
		_putchar(n + '0');
	}
}
