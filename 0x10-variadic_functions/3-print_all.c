#include <stdio.h>
#include <stdarg.h>
/**
* print_all - Prints anything.
* @format: String with format of parameters.
*/
void print_all(const char * const format, ...)
{
	va_list list;
	short i = 0;
	char *str;

	while (format)
	{
		va_start(list, format);
		while (*(format + i))
		{
			switch (*(format + i))
			{
				case 'c':
					printf("%c", (char) va_arg(list, int));
					break;
				case 'i':
					printf("%d", va_arg(list, int));
					break;
				case 'f':
					printf("%f", (float) va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s", str);
					break;
				default:
					i++;
					continue;
			}
			if (*(format + i + 1))
				printf(", ");
			i++;
		}
		va_end(list);
		break;
	}
		printf("\n");
}
