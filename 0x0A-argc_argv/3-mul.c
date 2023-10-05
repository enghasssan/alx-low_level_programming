#include <stdio.h>

/**
 * main - multiplies 2 integers
 * @argc: no of inputs
 * @argv: pointer to array of inputs
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[argc - 2]) * atoi(argv[argc - 1]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", mul);
	return (0);
}
