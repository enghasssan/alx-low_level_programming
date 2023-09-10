#include <stdio.h>

/**
 * main - Entry point
 *
 * Descirption: all combs of 2-2 digits, 0 to 99 for 2 digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n1;
	int n2;
	int n3;
	int n4;
	
	for (n1 = 48; n1 <= 57; n1++)
	{
		for (n2 = 48; n2 <= 57; n2++)
		{
			putchar(n1);
			ptuchar(n2);
			putchar(' ');
			for (n3 = 48; n3 <= 57; n3++)
			{
				for (n4 = 48; n4 <= 57; n4++)
				{
					if (n1 + n2 < n3 + n4)
					{
					putchar(n3);
					putchar(n4);
					putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
