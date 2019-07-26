#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - Prints strings, followed by a new line.
* @separator: Separator to print between strings.
* @n: Number of arguments.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *elem;

	va_start(list, n);
	if (!separator)
		separator = "";
	for (i = 0; i < n; i++)
	{
		elem = va_arg(list, char *);
		printf("%s%s", (elem ? elem : "(nil)"), (i == n - 1 ? "\n" : separator));
	}
	va_end(list);
}
