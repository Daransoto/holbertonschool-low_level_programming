#include "holberton.h"
/**
* _puts_recursion - Prints a string, followed by a new line.
* @s: String to print.
*/
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s)
		_puts_recursion(s + 1);
	else
		_putchar('\n');
}
