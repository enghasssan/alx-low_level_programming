#include "main.h"

/**
 * isupper - writes a function that checks for uppercase character.
 *
 * @c: input variable
 *
 * Return 1 if c is uppercase, else return 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <=90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
