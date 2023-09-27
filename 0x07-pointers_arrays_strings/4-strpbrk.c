#include "main.h"

/**
 * *_strpbrk - search a string for set of bytes
 * @s: string
 * @accept: set of bytes
 * Return: s index that mathces on of the bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				return (s);
			}

		}
		s++;
	}
	return ('\0');
}
