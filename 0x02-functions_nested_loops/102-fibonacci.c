#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (success).
*/
int main(void)
{
	long int n1 = 1, n2 = 2, r;
	int i;

	printf("1, 2, ");
	for (i = 0; i < 48; i++)
	{
		r = n1 + n2;
		printf("%ld", r);
		n1 = n2;
		n2 = r;
		if (i != 47)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
