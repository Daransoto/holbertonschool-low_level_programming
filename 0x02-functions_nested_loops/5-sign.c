#include "holberton.h"
/**
* print_sign - Prints + if a number is positive, 0 if it's 0,
* and - if it's negative.
* @n: Number to be evaluated.
* Return: 1 if the number is positive, 0 if the number is 0,
* and -1 if the number is negative.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
