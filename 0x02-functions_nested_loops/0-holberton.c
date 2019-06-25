#include "holberton.h"
/**
* main - entry point.
* Return: Always 0 (success).
*/
int main(void)
{
	char *text = "Holberton";
	int i;

	for (i = 0; i < 10; i++)
		_putchar(text[i]);
	_putchar('\n');
	return (0);
}
