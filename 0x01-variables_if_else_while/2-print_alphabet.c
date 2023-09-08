#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: alphabets from a to z
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
	putchar(alphabet);
	alphabet = alphabet + 1;
	}
	putchar('\n');
	return (0);
}
