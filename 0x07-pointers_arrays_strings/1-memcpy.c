#include "main.h"

/**
 * *_memcpy - function copies memory area
 * @dest: dest memory area copying to
 * @src: src to copy from
 * @n: number of bytes to copy from src
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
