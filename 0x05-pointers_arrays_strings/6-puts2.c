#include "holberton.h"
/**
* puts2 - Prints one char out of 2 of a string, followed by a new line.
* @str: String to be printed.
*/
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
