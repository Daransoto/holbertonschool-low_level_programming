#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point.
* Return: 0 (success).
*/
int main(void)
{
	int n, mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod = n % 10;
	printf("Last digit of %d is %d ", n, mod);
	if (mod > 5)
		printf("and is greater than 5\n");
	else if (mod != 0)
		printf("and is less than 6 and not 0\n");
	else
		printf("and is 0\n");
	return (0);
}
