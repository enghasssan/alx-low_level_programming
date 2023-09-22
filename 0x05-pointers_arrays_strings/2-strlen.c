#include "main.h"

/**
 * strlen - fn returns length of string.
 *
 * @s: points
 *
 * Return: 0 always
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
