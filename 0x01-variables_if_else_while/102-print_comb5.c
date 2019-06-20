#include <stdio.h>
/**
* main - Entry point.
* Return: 0 (success).
*/
int main(void)
{
	int digit11 = 48;
	int digit12 = 48;
	int digit21 = 48;
	int digit22 = 49;

	while (digit11 <= 57)
	{
		while (digit12 <= 57)
		{
			while (digit21 <= 57)
			{
				while (digit22 <= 57)
				{
					putchar(digit11);
					putchar(digit12);
					putchar(' ');
					putchar(digit21);
					putchar(digit22++);
					if (!(digit11 == 57 && digit12 == 56 && digit21 == 57 && digit22 == 58))
					{
						putchar(',');
						putchar(' ');
					}
				}
				digit21++;
				digit22 = 48;
			}
			digit12++;
			digit21 = digit11;
			digit22 = digit12 + 1;
		}
		digit11++;
		digit12 = 48;
		digit21 = digit11;
		digit22 = digit12 + 1;
	}
	putchar('\n');
	return (0);
}
