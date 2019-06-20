#include <stdio.h>
/**
* main - Entry point.
* Return: 0 (success).
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
		putchar(letter++);
	letter = 'A';
	while (letter <= 'Z')
		putchar(letter++);
	putchar('\n');
	return (0);
}
