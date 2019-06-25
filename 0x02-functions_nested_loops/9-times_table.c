#include "holberton.h"
/**
* times_table - Prints the times table from 0 to 9.
*/
void times_table(void)
{
	int result, c, n;

	for (c = 0; c < 10; c++)
	{
		for (n = 0; n < 10; n++)
		{
			result = n * c;
			if (result > 9)
			{

				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
			{
				if (n != 0)
					_putchar(' ');
				_putchar(result + '0');
			}
			if (n != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
