#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, in the fizzbuzz
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int number;
	
	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0 && !(number % 5 == 0))
		{
			printf("Fizz ");
		}
		else if (number % 5 == 0 && number % 3 != 0) 
		{
			if (number == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else if (number % 3 == 0 && number % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", number);
		}
	}
	printf("\n");
	return (0);
}
