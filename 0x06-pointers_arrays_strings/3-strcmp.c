#include "main.h"

/**
 * _strcmp - compares 2 strings.
 *
 * @s1: string 1 of chars
 * @s2: string 2 of chars
 *
 * Return: 0 if strings are same
 * Return: -1 if s1 < s2
 * Return: 1 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (i == j)
	{
		return (0);
	}
	else if (i > j)
	{
		return (1);
	}
	else if (i < j)
	{
		return (-1);
	}
}
