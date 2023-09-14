#include <stdio.h>
#include "main.h"

/**
 * _isalpha : checks for alphabetic character
 *
 * @c: checks for input
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * 0 otherwise (success)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
