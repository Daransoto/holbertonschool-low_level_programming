#include <stdlib.h>
/**
* _strdup - Copies of the string given as a parameter.
* @str: String to copy.
* Return: Pointer to the new string.
*/
char *_strdup(char *str)
{
	char *st = str, *dup;
	unsigned short c = 0;

	if (!str)
		return (0);

	while (*st++)
		c++;

	dup = malloc(c + 1);
	if (!dup)
		return (0);

	st = dup;
	while ((*st++ = *str++))
		;

	return (dup);
}
