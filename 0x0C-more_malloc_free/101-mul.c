#include "holberton.h"
#include <stdlib.h>
/**
* _puts - Prints a string.
* @str: String to be printed.
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
/**
* _strlen - Gives the length of a string.
* @s: String to evaluate.
* Return: The length of the given string.
*/
int _strlen(char *s)
{
	short n = 0;

	while (*s != '\0')
	{
		s++;
		n++;
	}
	return (n);
}
/**
* _isdigit - Checks for a digit (0 through 9).
* @c: Digit to be checked.
* Return: 1 if c is a digit, and 0 otherwise.
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/**
* infinite_add - Adds two numbers.
* @n1: First number.
* @n2: Second number.
* r: Buffer to store the result.
* @size_r: Size of buffer r.
* Return: Result of sum. On error return 0.
*
* init - Initializes pointers needed for main to work.
* @n1: n1.
* @n2: n2.
* @l1: l1.
* @l2: l2.
* @size_r: size_r.
* @min: min.
* @imin: imin.
* @max: max.
* @imax: imax.
* @c1: c1.
* @c2: c2.
*/
int init(char **n1, char **n2, int *l1, int *l2, int size_r, char **min,
char **imin, char **max, char **imax, char **c1, char **c2)
{
	while (*(*n1)++)
		(*l1)++;
	while (*(*n2)++)
		(*l2)++;
	*n1 -= 2;
	*n2 -= 2;
	if (*l1 >= size_r || *l2 >= size_r)
		return (0);
	if (*l1 > *l2)
	{
		*min = *n2;
		*imin = *c2;
		*max = *n1;
		*imax = *c1;
	}
	else
	{
		*min = *n1;
		*imin = *c1;
		*max = *n2;
		*imax = *c2;
	}
	return (1);
}
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = 0, l2 = 0, sum, exc = 0, i = size_r - 1, ret;
	char *c1 = n1, *c2 = n2, *min, *max, *imin, *imax;

	ret = init(&n1, &n2, &l1, &l2, size_r, &min, &imin, &max, &imax, &c1, &c2);
	if (!ret)
		return (0);
	r[i] = '\0';
	while (min >= imin)
	{
		i--;
		sum = (*n1-- - '0') + (*n2-- - '0') + exc;
		exc = sum / 10;
		sum %= 10;
		r[i] = sum + '0';
		max--;
		min--;
	}
	while (max >= imax)
	{
		i--;
		sum = (*max - '0') + exc;
		exc = sum / 10;
		sum %= 10;
		r[i] = sum + '0';
		max--;
	}
	if ((l1 == size_r - 1 || l2 == size_r - 1) && exc > 0)
		return (0);
	if (exc > 0)
		r[--i] = exc + '0';
	return (r + i);
}
/**
* _calloc - Allocates memory for an array.
* @nmemb: Number of elements.
* @size: Size in bytes of each element.
* Return: Pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int i = 0;

	if (nmemb <= 0 || size <= 0)
		return (0);

	memory = malloc(nmemb * size);
	if (!memory)
		return (0);
	for (i = 0; i < nmemb * size; i++)
		*(memory + i) = 0;

	return (memory);
}
/**
* main - Entry point.
* @argc: Argument counter.
* @argv: Argument vector.
* Return: 0 on success, 1 on error.
*/
int main(int argc, char *argv[])
{
	int Ln1, Ln2, i, j, mult = 0;
	char *res, *buf;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	Ln1 = _strlen(argv[1]);
	Ln2 = _strlen(argv[2]);
	for (i = 0; i < Ln1; i++)
		if (!_isdigit(argv[1][i]))
		{
			_puts("Error");
			exit(98);
		}
	for (i = 0; i < Ln2; i++)
		if (!_isdigit(argv[2][i]))
		{
			_puts("Error");
			exit(98);
		}

	res = _calloc(Ln1 + Ln2 + 1, 1);
	res[Ln1 + Ln2] = '\0';
	buf = malloc(Ln1 + 2);
	for (i = Ln2 - 1; i >= 0; i--)
	{
		for (j = Ln1 - 1; j >= 0; j--)
		{
			mult = mult / 10 + argv[2][i] - '0' * argv[1][j] - '0';
			buf[j + 1] = mult % 10;

		}
		if (mult / 10)
			buf[0] = mult / 10;
		else
			buf[0] = 0;
	}
	return (0);
}
