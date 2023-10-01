#include "main.h"

/**
 * sqrt2 - get natural sqrt of n
 * @a: number n
 * @b: 1 and iterates
 * Return: sqrt of n {N} or -1 at no ans
 */

int sqrt2(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - return sqrt of n
 * @n: number
 * Return: sqrt of n {N} or -1 if not {N}
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
