#include <stdio.h>

/**
 * main - print the number of arguments
 * passed into the program
 * @argc: counter for size of array
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int i = 1;
	while (argv[i] != '\0')
	{
		i++;
	}
	printf("%d\n", i);
	return (0);
}
