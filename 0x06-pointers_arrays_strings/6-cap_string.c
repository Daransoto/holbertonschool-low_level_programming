/**
* cap_string - Capitalizes all words of a string.
* @s: String to convert.
* Return: converted string.
*/
char *cap_string(char *s)
{
	char *t = s;

	if (*t >= 97 && *t <= 122)
		*t -= 32;
	while (*++t)
		if (*t == ',' || *t == ';' || *t == '.' || *t == '!' || *t == '?' ||
		*t == '"' || *t == '(' || *t == ')' || *t == '{' || *t == '}' || *t == 9 ||
		*t == ' ' || *t == '\n')
			if (*(t + 1) >= 97 && *(t + 1) <= 122)
				*(t + 1) -= 32;
	return (s);
}
