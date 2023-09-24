#include "main.h"

/**
 * *string_toupper - fn subs. lowercase char by
 * uppercase chars of string
 * @a: string
 * Return: string
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(a + i) >= 'a' && *(a + i) <= 'z')
		{
			*(a + 1) = *(a + 1) - 32;
		}
		i++;
	}
	return (a);
}
