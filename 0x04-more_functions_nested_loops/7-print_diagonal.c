#include "holberton.h"
/**
* print_diagonal - Draws a diagonal line on the terminal.
* @n: Length of the diagonal.
*/
void print_diagonal(int n)
{
	short s = n, c;

	for (; n > 0; n--)
	{
		for (c = 0; c < s - n; c++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
