#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabets in lowercase and then in uppercase followed by a new line.
 *
 * Return: Always (success)
 */
int main(void)
{
	char alphabet = 'a';
	char ALPHABET = 'A';

	while (a <= z)
	{
		putchar(alphabet);
		alphabet = alphabet + 1;
	}
	while (A <= Z)
	{
		putchar(ALPHABET);
		ALPHABET = ALPHABET +1;
	}		
	putchar('\n');
	return (0);

}
