/**
* string_toupper - Changes all lowercase letters of a string to uppercase.
* @d: String to convert.
* Return: String converted.
*/
char *string_toupper(char *d)
{
	char *s = d;

	while (*s++)
		if (*(s - 1) >= 97 && *(s - 1) <= 122)
			*(s - 1) -= 32;
	return (d);
}
