#include <stdio.h>
#include "main.h"

/**
 * abs - a function that computes the absolute value of an integer
 *
 * @x: input value integer (int)
 *
 * Return: Always 0 (success)
 */
int _abs(int)
{
	int a;
	int b;

	if (a >= 0)
	{
		putchar('0' + a);
	}
	else if (a < 0)
	{
		b = a * -1;
		putchar('0' + b);
	}
	return (0);
}
