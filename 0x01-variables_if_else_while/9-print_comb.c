#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: all possible combinations of single digit numbs
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num1 num2;
	
	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 =48; num2 <= 57; num2++)
		{
			putchar(num1);
			putchar(',');
			putchar(' ');
			putchar(num2);
		}
	}
	return(0);
}
