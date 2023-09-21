#include "main.h"

/**
 * swap_int - swaps the values of 2 integers.
 *
 * @a: points to the input variable's loc
 *
 * @b: points to the input variable's loc
 *
 * Return: always 0.
 */

void swap_int(int *a, int *b)
{
	int i = *b;
	int j = *a;

	*a = i;
	*b = j;
}
