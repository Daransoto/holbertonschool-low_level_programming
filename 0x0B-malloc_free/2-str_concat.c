#include <stdlib.h>
/**
* size - Gets the size of a string.
* @str: String to evaluate.
* Return: Length of the given string.
*/
unsigned short size(char *str)
{
	unsigned short len = 0;

	while (*str++)
		len++;

	return (len);
}
/**
* str_concat - Concatenates two strings.
* @s1: First string.
* @s2: Second string.
* Return: Pointer to new string, NULL on failure.
*/
char *str_concat(char *s1, char *s2)
{
	unsigned short Ls1, Ls2;
	char *conc, *tmp;

	if (!s1)
		Ls1 = 0;
	else
		Ls1 = size(s1);

	if (!s2)
		Ls2 = 0;
	else
		Ls2 = size(s2);

	conc = malloc(Ls1 + Ls2 + 1);
	if (!conc)
		return (0);

	tmp = conc;
	while (*s1)
		*tmp++ = *s1++;

	while ((*tmp++ = *s2++))
		;

	return (conc);
}
