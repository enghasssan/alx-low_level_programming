#include <stdio.h>

/**
 * main - print the number of arguments
 * passed into the program
 * @argc: counter for size of array
 * @argv: array has strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	void(argc);
	int i = 0;
	while (argv[i] != '\0')
	{
		i++;
	}
	printf("%d\n", i);
	return (0);
}
