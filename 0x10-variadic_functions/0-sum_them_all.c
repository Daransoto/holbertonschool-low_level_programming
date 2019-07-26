#include <stdarg.h>
/**
* sum_them_all - Sum all its parameters.
* Return: Sum of all its parameters.
* @n: Number of parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int sum = 0, i = 0;

	va_start(list, n);
	while (i++ < n)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
