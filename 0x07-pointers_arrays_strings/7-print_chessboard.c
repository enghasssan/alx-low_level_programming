#include "main.h"

/**
 * print_chessboard - fun prints the chessboard
 * @a: 2D array of 8 x 8
 * Return: always 0
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
