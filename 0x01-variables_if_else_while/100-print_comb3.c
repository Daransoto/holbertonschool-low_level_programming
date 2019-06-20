#include <stdio.h>
/**
* main - Entry point.
* Return: 0 (success).
*/
int main(void)
{
	int digit1 = 48;
	int digit2 = 49;

	while (digit1 <= 57)
	{
		while (digit2 <= 57)
		{
			putchar(digit1);
			putchar(digit2++);
			if (!(digit1 == 56 && digit2 == 58))
			{
				putchar(',');
				putchar(' ');
			}
		}
		digit1++;
		digit2 = digit1 + 1;
	}
	putchar('\n');
	return (0);
}
