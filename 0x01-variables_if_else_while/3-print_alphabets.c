#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alpha. in lower/upper cases
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
