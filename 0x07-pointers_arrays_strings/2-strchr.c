#include "main.h"

/**
 * *_strchr - return (s) starts from (c) till end of (s)
 * @s: string
 * @c: char
 * Return: First occurence of c else NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
