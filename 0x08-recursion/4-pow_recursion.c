#include "main.h"

/**
 * _pow_recursion - get value of x^y
 * @x: base number
 * @y: pwr number
 * Return: x^y or -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
