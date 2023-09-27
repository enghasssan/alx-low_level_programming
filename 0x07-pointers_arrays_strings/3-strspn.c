#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: string
 * @accept: bytes
 * Return: no. of bytes in s that's in accep
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
