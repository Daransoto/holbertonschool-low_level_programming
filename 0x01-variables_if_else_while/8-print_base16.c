#include <stdio.h>
/**
* main - Entry point.
* Return: 0 (success).
*/
int main(void)
{
	char letter = 'a';
	int digit = 48;

	while (digit <= 57)
		putchar(digit++);
	while (letter <= 'f')
		putchar(letter++);
	putchar('\n');
	return (0);
}
