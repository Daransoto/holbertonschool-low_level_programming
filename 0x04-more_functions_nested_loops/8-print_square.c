#include "holberton.h"
/**
* print_square - Prints a square, followed by a new line.
* @size: The size of the square.
*/
void print_square(int size)
{
	short b, h;

	if (size <= 0)
		_putchar('\n');
	for (b = size; b > 0; b--)
	{
		for (h = size; h > 0; h--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
