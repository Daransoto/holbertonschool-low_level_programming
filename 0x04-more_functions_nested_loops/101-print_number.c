#include "holberton.h"
/**
* print_number - Prints an integer.
* @n: integer to be printed.
*/
void print_number(int n)
{
	unsigned int d = 1, c, r;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	c = n;
	while (c / 10)
	{
		d *= 10;
		c /= 10;
	}
	_putchar(c + '0');
	while (d >= 10)
	{
		r = n % d;
		d /= 10;
		_putchar(r / d + '0');
	}
}
