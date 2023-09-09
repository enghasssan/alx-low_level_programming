#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print from 0 to 10 using putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	
	putchar('\n');
	return (0);
}
