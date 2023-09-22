#include "main.h"

/**
 * *_strcpy - fn compy string pointed to by src
 * including the terminating null byte
 * to the buffer pointed to by dest
 *
 * @dest: char pointer to buffer
 *
 * @src: pointer to string to be copied
 *
 * Return: the pointer to the dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	while (src[i] != '\0')
	{
		i++;
		dest[i] = src[i];
	}
	return (dest);
}
