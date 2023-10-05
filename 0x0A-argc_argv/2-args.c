#include <stdio.h>

/**
 * main - prints all char inputs
 * @argc: int of no of char inputs
 * @argv: pointer to array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
