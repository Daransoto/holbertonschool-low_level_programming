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

	while (i++ <= size + 1)
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
		printf("%c%c", *b, *(b + 1));
		printf("%c%c", *(b + 2), *(b + 3));
		printf("%c%c", *(b + 4), *(b + 5));
		printf("%c%c", *(b + 6), *(b + 7));
		printf("%c%c\n", *(b + 8), *(b + 9));
		addr += 10;
		b += 10;
		d += 10;
	}
	if (size % 10)
	{
		printf("%08x: ", addr);
		for (i = 0; i < size % 10 / 2; i++)
		{
			printf("%02x%02x ", *(d + i), *(d + i + 1));
			d++;
		}
		for (i = 0; i < (10 - size % 10) / 2; i++)
			printf("     ");
		for (i = 0; i < (10 - size % 10) + 2; i++)
			printf("%c", *b++);
	}
	putchar('\n');
}
