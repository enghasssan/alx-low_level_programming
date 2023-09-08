#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: alphabet except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'd'; letter++)
		putchar(letter);
	for (letter = 'f'; letter <= 'p'; letter++)
		putchar(letter);
	for (letter = 'r'; letter <= 'z'; letter++)
	       	putchar(letter);
	
	putchar('\n');

	return (0);
}
