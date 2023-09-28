#include "main.h"

/**
 * print_diagsums - prints sum of 2 diagonals of
 * square matrix of integers
 * @a: array and must be 2D as it is a matrix
 * size: size of square matrix
 * Return: always 0
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sumR = 0;
	int sumL = 0;

	while (i < size)
	{
		while (j < size)
		{
			sumR = sumR + a[i,j];
		}
		i++;
		j++;
	}
	i = 0;
	j = size - 1;
	while (i < size)
	{
		while (j < size)
		{
			sumL = sumL + a[i,j];
		}
		i++;
		j--;
	}
	if (size %2 != 0)
	{
		i = size / 2;
		j = size / 2;
		sumL = sumL - a[i,j];
	}
	printf("%d", sumR + sumL);
}
