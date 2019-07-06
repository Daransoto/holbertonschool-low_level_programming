#include <stdio.h>
/**
* print_buffer - Prints a buffer.
* @b: Buffer.
* @size: Size of the buffer.
*/
void print_buffer(char *b, int size)
{
	int addr = 0, i = 0;
	char *c = b, e[1000], *d = e;

	while (i++ < size)
	{
		d[i - 1] = c[i - 1];
		if (c[i - 1] < 32 || c[i - 1] > 126)
			c[i - 1] = '.';
	}
	for (i = 0; i < size / 10; i++)
	{
		printf("%08x: ", addr);
		printf("%02x%02x ", *d, *(d + 1));
		printf("%02x%02x ", *(d + 2), *(d + 3));
		printf("%02x%02x ", *(d + 4), *(d + 5));
		printf("%02x%02x ", *(d + 6), *(d + 7));
		printf("%02x%02x ", *(d + 8), *(d + 9));
		printf("%c%c%c%c", *b, *(b + 1), *(b + 2), *(b + 3));
		printf("%c%c%c%c", *(b + 4), *(b + 5), *(b + 6), *(b + 7));
		printf("%c%c\n", *(b + 8), *(b + 9));
		b += 10, d += 10, addr += 10;
	}
	if (size % 10)
	{
		printf("%08x: ", addr);
		for (i = 0; i < size % 10; i++, d++)
		{
			printf("%02x", *d);
			if (i % 2)
				putchar(' ');
		}
		for (i = 0; i <= 10 - (size + 1) % 10; i++)
			printf("  ");
		for (i = 0; i < 5 - ((size) % 10 / 2); i++)
			putchar(' ');
		for (i = 0; i < size % 10; i++)
			printf("%c", *b++);
	}
	if (size == 0 || size % 10)
		putchar('\n');
}
