#include "holberton.h"
/**
* print_alphabet - Prints the whole lowercase alphabet.
* Return: nothing.
*/
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
		_putchar(letter++);
	_putchar('\n');
}
