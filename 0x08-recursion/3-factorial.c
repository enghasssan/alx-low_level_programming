#include "main.h"

/**
 * factorial - return factorial of n
 * @n: number
 * Return: factorial of n
 */

int factorial(int n)
{
	int ans;

	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
