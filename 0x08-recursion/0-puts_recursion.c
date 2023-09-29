#include "main.h"

/**
 * _puts_recursion - prints a string
 * using recursion
 * @s: string
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	_putchar(*s + 48);
	_puts_recursion(s + 1);
	
	if (*s == '\0')
		return (0);
}
