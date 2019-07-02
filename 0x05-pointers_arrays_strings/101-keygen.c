#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
* main - Entry point.
* Return: Always 0.
*/
int main(void)
{
	int sum = 0, random, i = 0;
	char pass[10000], *res = pass;

	srand(time(NULL));
	while (sum < 2772)
	{
		random = rand() % 96 + 32;
		if (2772 - sum > 126)
		{
			pass[i] = random;
			sum += random;
		}
		else if (2772 - sum < 32)
		{
			i = 0;
			sum = 0;
		}
		else
		{
			pass[i] = 2772 - sum;
			sum = 2772;
		}
		i++;
	}
	printf("%s", res);
	return (0);
}
