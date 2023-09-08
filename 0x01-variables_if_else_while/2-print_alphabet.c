#include <stdio.h>

/**
 * Main is entry point
 *
 * Description: prints alphabet in lowercase followed by a new line
 *
 * Return 0 = success
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
