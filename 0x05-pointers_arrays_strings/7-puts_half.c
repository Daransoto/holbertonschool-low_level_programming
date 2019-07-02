#include "holberton.h"
void puts_half(char *str)
{
	short c = 0, l;
	char *t = str;

	while (*str != '\0')
		c++, str++;
	l = c;
	if (c % 2)
		c = (c - 1) / 2;
	else
		c /= 2;
	while (c <= l)
		_putchar(*(t + c++));
	_putchar('\n');
}
