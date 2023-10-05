#include <stdio.h>

/**
 * main - multiplies 2 integers
 * @argc: no of inputs
 * @argv: pointer to array of inputs
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul = 1;

	if (argc > 1)
	{
		while (argc > 1)
		{
			argc--;
			mul = mul * atoi(argv[argc]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
