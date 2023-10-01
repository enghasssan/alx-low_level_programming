#include "main.h"
/**
 * prime2 - makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number iretates from 1 to n
 * Return: on success 1, else -1
 */

int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - fn gets prime no.
 * @n: input integer
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
