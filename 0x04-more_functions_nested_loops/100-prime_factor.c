#include <stdio.h>
#include <math.h>
/**
* main - Entry point.
* Return: Always 0 (success).
*/
int main(void)
{
	long i, n = 612852475143;

	for (i = 2; i < sqrt(n); i++)
	{
		if (!(n % i))
		{
			n /= i;
			i = 1;
		}
	}
	printf("%ld\n", n);
	return (0);
}

