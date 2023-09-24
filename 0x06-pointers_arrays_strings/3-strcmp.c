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
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
