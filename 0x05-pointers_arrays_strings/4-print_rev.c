#include "holberton.h"
/**
* print_rev - Prints a string in reverse order.
* @s: String to be printed.
*/
void print_rev(char *s)
{
	char *t = s;

	while (*(s + 1) != '\0')
		s++;
	for (; s >= t; s--)
		_putchar(*s);
	_putchar('\n');
}
