#include <stdio.h>
#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 *
 * @a: input value integer (int)
 *
 * Return: Always value of abs (success)
 */
int _abs(int)
{
	int a;

	if (a < 0)
	{
		a = a * (-1);
	}
	return (a);
}
