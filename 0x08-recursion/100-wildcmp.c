/**
* wildcmp - Compares two strings.
* @s1: First string to compare.
* @s2: Second string.
* Return: 1 if the strings can be considered identical, otherwise return 0.
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 && *s2 && *s2 != '*')
	{
		if (*s1 == *s2)
			return (wildcmp(s1 + 1, s2 + 1));
		else
			return (0);
	}
	else if (*s2 == '*')
	{
		if (!wildcmp(s1, s2 + 1))
			if (*(s1 + 1))
				return (wildcmp(s1 + 1, s2));
			else
				return (0);
		else
			return (1);
	}
	else if (!*s1 && !*s2)
	{
		return (1);
	}
	else if (!*s2 && *(s2 - 1) == '*')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
