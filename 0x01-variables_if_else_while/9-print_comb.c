#include <stdio.h>
/**
* main - Entry point.
* Return: 0 (success).
*/
int main(void)
{
	int digit = 48;

	while (digit <= 57)
	{
		putchar(digit++);
		if (digit < 58)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
