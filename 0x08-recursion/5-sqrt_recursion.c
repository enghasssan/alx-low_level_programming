#include "main.h"

/**
 * sqrt - get natural sqrt of n
 * @a: number n
 * @b: 1 and iterates
 * Return: sqrt of n {N} or -1 if not {N}
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
	return (sqrt(a, b + 1));
}
/**
 * _sqrt_recursion - get natural sqrt of n
 * @n: number
 * Return: sqrt of n {N} or -1 if not {N}
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
