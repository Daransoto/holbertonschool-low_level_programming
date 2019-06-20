#include <stdio.h>
/**
* main - Entry point.
* Return: 0 (success).
*/
int main(void)
{
	int digit = 0;

	while (digit < 10)
		printf("%d", digit++);
	putchar('\n');
	return (0);
}
