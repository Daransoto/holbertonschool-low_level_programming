#include "holberton.h"
/**
* more_numbers - Prints 10 times the numbers, 0 to 14, followed by new line.
*/
void more_numbers(void)
{
	short i, num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
