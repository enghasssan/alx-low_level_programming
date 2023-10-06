#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds given + inputs
 * @argc: no. of inputs
 * @argv: array of inputed
 * Return: 0
 */

int main(argc, *argv[])
{
	char *c;
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
				sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
