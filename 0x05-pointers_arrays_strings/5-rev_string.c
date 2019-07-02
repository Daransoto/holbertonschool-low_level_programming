#include "holberton.h"
/**
* rev_string - Reverses a string.
* @s: String to be printed.
*/
void rev_string(char *s)
{
	char *t = s, n[1000];
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
