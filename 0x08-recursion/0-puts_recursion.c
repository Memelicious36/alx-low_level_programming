#include "main.h"

/**
 * _puts_recursion - pring a string followed by a line
 * @s: the string to print
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		return;
	}
	
	_putchar(*s);
	s++;
	_puts_recursion(s);
}

