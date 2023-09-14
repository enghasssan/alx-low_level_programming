#include <stdio.h>
#include "main.h"

/**
 * isalpha : checks for alphabetic character
 *
 * @c: takes input from other fns
 *
 * Return: 1 if c is a letter, else 0 (success)
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if  (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
