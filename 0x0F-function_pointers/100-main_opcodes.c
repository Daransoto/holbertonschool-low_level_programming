#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	unsigned char *poin;
	int i;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		puts("Error");
		exit(2);
	}
	poin = (unsigned char *)main;
	for (i = 0; i < atoi(argv[1]); i++)
	{
		printf("%02x", *poin++);
		if (i < atoi(argv[1]) - 1)
			putchar(' ');
	}
	return (0);
}
