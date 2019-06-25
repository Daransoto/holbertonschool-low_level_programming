#include "holberton.h"
/**
* print_last_digit - Prints the last digit of a given number.
* @n: The number to evaluate.
* Return: The absolute value of the number.
*/
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
