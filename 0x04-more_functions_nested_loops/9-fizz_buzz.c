#include <stdio.h>
/**
* main - Entry point.
* Return: Always 0 (success).
*/
int main(void)
{
	short i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 3) && !(i % 5))
			printf("FizzBuzz ");
		else if (!(i % 3))
			printf("Fizz ");
		else if (!(i % 5))
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	putchar('\b');
	putchar('\n');
}
