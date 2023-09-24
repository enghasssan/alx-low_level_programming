#include "main.h"

/**
 * reverse_array - reverses array content integers
 *
 * @a: pointer to array given to fn
 * @n: n of elements of array
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int swap, begin, end;

	begin = 0;
	end = n - 1;
	while (begin < end)
	{
		swap = *(a + begin);
		*(a + begin) = *(a + end);
		*(a + end) = swap;
		begin++;
		end--;
	}
}
