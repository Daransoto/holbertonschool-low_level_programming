#include "holberton.h"
/**
* print_triangle - Prints a triangle, followed by a new line.
* @size: heihgt of the triangle.
*/
void print_triangle(int size)
{
	short s = size, c, n, l;

	if (size <= 0)
		_putchar('\n');
	for (l = 0; l < size; l++)
	{
		for (c = size - s; c < size - 1; c++)
			_putchar(' ');
		s--;
		for (n = 0; n < size - s; n++)
			_putchar('#');
		_putchar('\n');
	}
}
