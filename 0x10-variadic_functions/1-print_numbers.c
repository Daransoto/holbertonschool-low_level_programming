#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - Prints numbers, followed by a new line.
* @separator: Separator to print between numbers.
* @n: Number of arguments.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	if (!separator)
		separator = "";
	for (i = 0; i < n; i++)
		printf("%d%s", va_arg(list, int), (i == n - 1 ? "\n" : separator));
	va_end(list);
}
