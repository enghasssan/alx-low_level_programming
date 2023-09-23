#include "main.h"

/**
 * _strcmp - compares 2 strings
 *
 * @s1: string 1 of chars
 * @s2: string 2 of chars
 *
 * Return: 0 if strings are same
 * -1 if s1 < s2
 *  1 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int eq = 0;
	char *str1 = s1;
	char *str2 = s2;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			eq = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		str1++;
		str2++;
	}
	return (equal);
}
