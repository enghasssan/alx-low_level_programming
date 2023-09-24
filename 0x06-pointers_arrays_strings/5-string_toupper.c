#include "main.h"

/**
 * *string_toupper - change lowercase letters to uppercase
 * @a: string
 * Return: string capitalized
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (*(a + i) != '\0')
	{
		if (*(a + i) >= 'a' && *(a + i) <= 'z')
		{
			*(a + 1) = *(a + 1) - 32;
		}
		i++;
	}
	return (a);
}
