#include "main.h"

/**
 * *_strchr - locates a certain char (c) in a string (s)
 * @s: string
 * @c: char
 * Return: First occurence of c else NULL
 */

char *_strchr(char *s, char c)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
	}
	return ('\0');
}
