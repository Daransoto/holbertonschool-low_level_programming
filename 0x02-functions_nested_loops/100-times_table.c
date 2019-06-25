#include "holberton.h"
/**
* print_times_table - Prints the times table from 0 to n.
* @n: Number that will limit the times table.
*/
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int result, c, i;

		for (c = 0; c <= n; c++)
		{
			for (i = 0; i <= n; i++)
			{
				result = i * c;
				if (result > 99)
				{
					_putchar(result / 100 + '0');
					_putchar(result % 100 / 10 + '0');
					_putchar(result % 100 % 10 + '0');
				}
				else if (result > 9)
				{
					_putchar(' ');
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
				else
				{
					if (i != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(result + '0');
				}
				if (i != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
