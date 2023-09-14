#include <stdio.h>
#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 *
 * @a: input value integer (int)
 *
 * Return: Always value of abs (success)
 */
int _abs(int l)
{
	if (l < 0)
	{
		l = l * (-1);
	}
	return (l);
}
