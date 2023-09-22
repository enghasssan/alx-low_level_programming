#include "main.h"

/**
 * print_array - fn prints n elements of array
 *
 * @n: int variable no of elements of array
 *
 * @a: array of integers
 *
 * Return: 0 always
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
