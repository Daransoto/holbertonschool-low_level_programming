#include <stdio.h>
/**
* main - Entry point.
* Return: Always 0 (success).
*/
int main(void)
{
	unsigned long int n1 = 1, n2 = 2, r=0;
	int i;

	printf("1, 2, ");
	for (i = 0; i < 96; i++)
	{
		r = n1 + n2;
		printf("%lu", r);
		n1 = n2;
		n2 = r;
		if (i != 95)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
