#include "main.h"

/**
 * *_strcat - fn concatenates(weld) two strings
 *
 * @dest: home string to join to
 * @src: string to join dest away from home
 *
 * Return: 0 always.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int k;

	while (dest[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
