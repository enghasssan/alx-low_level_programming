#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: lowercase alphabet in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int revalph;

	for (revalph = 122; revalph >= 97; revalph--)
	{
		putchar(revalph);
	}
	putchar('\n');
	return (0);
}
