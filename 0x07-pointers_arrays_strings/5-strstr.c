#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to beginning of substring
 * else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *is = haystack;
		char *pd = needle;

		while (*is == *pd && *pd != '\0')
		{
			is++;
			pd++;
		}

		if (*pd == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
