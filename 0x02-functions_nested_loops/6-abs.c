#include "holberton.h"
/**
* _abs - Gives the absolute value of a number.
* @n: The number to be evaluated.
* Return: The absolute value of the number.
*/
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
