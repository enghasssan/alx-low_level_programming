#include "main.h"

/**
 * print_to_98 - prints all N numbers from n to 98 then \n.
 *
 * @n: integer input
 *
 * Returns: Always 0 (success)
 */

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		printf("%d",n);
		while (n != 98)
		{
		printf(", ");
		}
	}
	printf("\n");
}
