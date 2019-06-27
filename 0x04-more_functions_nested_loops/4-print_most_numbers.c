#include "holberton.h"
/**
* print_most_numbers - Prints the numbers, from 0 to 9, followed by a new line.
*/
void print_most_numbers(void)
{
	short i;

	for (i = 0; i <= 9; i++)
	{
		if (i + '0' != '2' && i + '0' != '4')
			_putchar(i + '0');
	}
	_putchar('\n');
}
