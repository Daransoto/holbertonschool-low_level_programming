#include "holberton.h"
/**
* print_rev - Prints a string in reverse order.
* @s: String to be printed.
*/
void print_rev(char *s)
{
	char *t = s;

	while (*s != '\0')
		s++;
	while (s > t)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
