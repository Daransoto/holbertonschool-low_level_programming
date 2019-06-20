#include <stdio.h>
/**
* main - Entry point.
* Return: 0 (success).
*/
int main(void)
{
	char letter = 'a';
	int digit = 0;

	while (digit <= 9)
		printf("%d", digit++);
	while (letter <= 'f')
		putchar(letter++);
	putchar('\n');
	return (0);
}
