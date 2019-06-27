#include "holberton.h"
/**
* print_line - Draws a straight line in the terminal.
* @n: length of the line.
*/
void print_line(int n)
{
	for (; n > 0; n--)
		_putchar('_');
	_putchar('\n');
}
