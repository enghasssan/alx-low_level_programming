#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: output all possible smallest diffrent combs. of 3 digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n1 = 48;
	int n2;
	int n3;

	while (n1 <= 57)
	{
		n2 = 48;
		while (n2 <= 57)
		{
			n3 = 48;
			while (n3 <= 57)
			{
				if (n1 != n2 && n3 != n2 && n3 != n1 && n1 < n2 && n2 < n3)
				{
					putchar(n1);
					putchar(n2);
					putchar(n3);
					if (n1 + n2 + n3 != 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
			n3++;
			}
		n2++;
		}
	n1++;
	}
	putchar('\n');
	return (0);
}
