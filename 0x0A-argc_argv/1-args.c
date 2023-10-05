#include <stdio.h>

/**
 * main - print the number of arguments
 * passed into the program
 * @argc: counter for size of array
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;
	for (i = 0; i < argc; i++)
	{
		i++;
	}
	printf("%d\n", i - 1);
	return (0);
}
