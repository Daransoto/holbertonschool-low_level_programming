/**
* _strcmp - Compares two strings.
* @s1: First string to compare.
* @s2: Second string to compare.
* Return: 0 if strings are equal or the difference between s1 and s2 if not.
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		return (*s1 - *s2);
	return (0);
}
