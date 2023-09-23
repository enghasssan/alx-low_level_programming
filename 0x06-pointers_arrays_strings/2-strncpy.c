#include "main.h"

/**
 * *_strncpy - fn copies a string
 * @dest: dest string
 * @src: src string
 * @n: max bytes needed from src
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int k;

	while (src[i] != '\0')
	{
		i++;
	}
	for (k = 0; k <= i && k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
