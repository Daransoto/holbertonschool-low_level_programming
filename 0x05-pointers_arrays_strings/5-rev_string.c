#include "holberton.h"
/**
* print_rev - Prints a string in reverse order.
* @s: String to be printed.
*/
void rev_string(char *s)
{
	char *t = s, n[10];
	short c = 0;

	while (*s != '\0')
	{
		n[c] = *s;
		s++;
		c++;
	}
	c = 0;
	while (s > t)
	{
		s--;
		*s = n[c];
		c++;
	}
}
