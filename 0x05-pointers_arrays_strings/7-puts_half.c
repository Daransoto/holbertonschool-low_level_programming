#include "holberton.h"
/**
* puts_half - Prints last half of a string.
* @str: string to use.
*/
void puts_half(char *str)
{
	short c = 0, l;
	char *t = str;

	while (*str != '\0')
		c++, str++;
	l = c;
	if (c % 2)
		c = c / 2 + 1;
	else
		c /= 2;
	while (c < l)
		_putchar(*(t + c++));
	_putchar('\n');
}
