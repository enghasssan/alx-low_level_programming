#include "main.h"

/**
 * _strlen_recursion - gets length of a str
 * @s: string
 * Return: Length of string as a variable
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
