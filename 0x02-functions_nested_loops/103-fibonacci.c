#include <stdio.h>
/**
* main - Entry point.
* Return: Always 0 (success).
*/
int main(void)
{
	long int n1 = 1, n2 = 2, r, sum = 2;

	while (1)
	{
		r = n1 + n2;
		if (r > 4000000)
			break;
		if (r % 2 == 0)
			sum += r;
		n1 = n2;
		n2 = r;
	}
	printf("%ld\n", sum);
	return (0);
}
