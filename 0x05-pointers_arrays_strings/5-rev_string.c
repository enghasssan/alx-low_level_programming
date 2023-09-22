#include "main.h"

/**
 * rev_string - fn that reverses a string
 *
 * @s: array parameter of char
 *
 * Return: 0 always
 */

void rev_string(char *s)
{
	char k;
	int b = 0;
	int c;
	int a;

	while (s[b] != '\0')
	{
		b++;
	}
	c = b - 1;
	for (a = 0; a < b / 2; a++)
	{
		k = s[a];
		s[a] = s[c];
		s[c] = k;
	}
}
