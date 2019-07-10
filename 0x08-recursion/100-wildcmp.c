void match(char **s1, char **s2)
{
	if (**s1 == '*')
	{
		*s1 += 1;
		match(s1, s2);
	}
	else if (*s2)
	{
		if (**s1 == **s2)
			return;
		else
		{
			*s2 += 1;
			match(s1, s2);
		}
	}
}
/**
* wildcmp - Compares two strings.
* @s1: First string to compare.
* @s2: Second string.
* Return: 1 if the strings can be considered identical, otherwise return 0.
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 && *s2)
	{
		if (*s1 == '*')
			match(&s1, &s2);
		else if (*s2 == '*')
			match(&s2, &s1);
		if (*s1 == *s2)
			if (*s1 != '\0')
				return (wildcmp(++s1, ++s2));
			else
				return (1);
		else
			return (0);
	}
	if ((!*s1 && !*s2) || (*s1 == '*' && !*(s1 + 1)) || (*s2 == '*' && !*(s2 + 1)))
		return (1);
	else
		return (0);
}
