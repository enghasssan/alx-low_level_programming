#include "main.h"

/**
 * *_strncat - fn that concatenates 2 strings
 *
 * @dest: destined string
 * @src: source string to join dest
 * @n: no. of the max bytes from src
 *
 * Return: 0 always.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' || j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
