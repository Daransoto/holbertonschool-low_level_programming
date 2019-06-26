#include <stdio.h>
#include <stdint.h>
/**
* main - Entry point.
* Return: Always 0 (success).
*/
int main(void)
{
	unsigned long int n1 = 1, n2 = 2, r = 0, n12, n22;
	int i;

	printf("1, 2, ");
	for (i = 0; i < 96; i++)
	{
		if (i < 93)
		{
			r = n1 + n2;
			printf("%lu", r);
			n1 = n2;
			n2 = r;
		}
		else
		{
			n12 = n1 % 1000000;
			n1 /= 1000000;
			n22 = n2 % 1000000;
			n2 = n2 / 1000000;
			printf("%lu", (n1+n2) + (n12+n22) / 1000000);
			printf("%lu", (n12 + n22) % 1000000);
		}
		if (i != 95)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
