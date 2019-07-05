#include <stdio.h>
/**
* print_buffer - Prints a buffer.
* @b: Buffer.
* @size: Size of the buffer.
*/
void print_buffer(char *b, int size)
{
	int addr = 0, i = 0;
	char *c = b;

	while (i++ < size)
		if (c[i - 1] < 32 || c[i - 1] > 126)
			c[i - 1] = '.';
	for (i = 0; i < size / 10; i++)
	{
		printf("%08x: ", addr);
		printf("%02x%02x ", *b, *(b + 1));
		printf("%02x%02x ", *(b + 2), *(b + 3));
		printf("%02x%02x ", *(b + 4), *(b + 5));
		printf("%02x%02x ", *(b + 6), *(b + 7));
		printf("%02x%02x ", *(b + 8), *(b + 9));
		printf("%c%c", *b, *(b + 1));
		printf("%c%c", *(b + 2), *(b + 3));
		printf("%c%c", *(b + 4), *(b + 5));
		printf("%c%c", *(b + 6), *(b + 7));
		printf("%c%c\n", *(b + 8), *(b + 9));
		addr += 10;
		b += 10;
	}
	printf("%08x: ", addr);
	for (i = 0; i < size % 10 - 1; i++)
	{
		printf("%02x%02x ", *(b + i), *(b + i + 1));
		b++;
	}
	printf("%02x%02x\n",*(b + i), *(b + i + 1));
}
