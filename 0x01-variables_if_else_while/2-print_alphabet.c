#include <stdio.h>

/**
 * main prints the alphabet in lowercase
 *
 * Return: Always 0
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
