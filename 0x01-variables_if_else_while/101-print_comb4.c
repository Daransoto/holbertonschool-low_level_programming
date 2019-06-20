#include <stdio.h>
/**
* main - Entry point.
* Return: 0 (success).
*/
int main(void)
{
	int digit1 = 48;
	int digit2 = 49;
	int digit3 = 50;

	while (digit1 <= 57)
	{
		while (digit2 <= 57)
		{
			while (digit3 <= 57)
			{
				putchar(digit1);
				putchar(digit2);
				putchar(digit3++);
				if (!(digit1 == 55 && digit2 == 56 && digit3 == 58))
				{
					putchar(',');
					putchar(' ');
				}
			}
			digit2++;
			digit3 = digit2 + 1;
		}
		digit1++;
		digit2 = digit1 + 1;
		digit3 = digit2 + 1;
	}
	putchar('\n');
	return (0);
}
