#include "holberton.h"
/**
* print_alphabet_x10 - Prints the whole lowercase alphabet 10 times.
* Return: nothing.
*/
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';
		while (letter <= 'z')
			_putchar(letter++);
		_putchar('\n');
	}
}
