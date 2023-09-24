#include "main.h"

/**
 * *string_toupper - change lowercase letters to uppercase
 * @s: string
 * Return: string capitalized
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + 1) = *(s + 1) - 32;
		}
		i++;
	}
	return (s);
}
