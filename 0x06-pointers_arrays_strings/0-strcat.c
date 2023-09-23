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
	char temp1[50];

	while (dest[i] != '\0')
	{
		temp1[i] = dest[i];
		i++;
	}

	k = i;
	i = 0;

	while (src[i] != '\0')
	{
		temp1[k] = src[i];
		i++;
		k++;
	}
	temp[i] = '\0';
	dest = temp1;
	return (dest);
}
