/**
* _strpbrk - Searches a string for any of a set of bytes..
* @s: String where substring will look.
* @accept: Substring of accepted chars.
* Return: Address of first occurrence..
*/
char *_strpbrk(char *s, char *accept)
{
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
				return (--s);
		accept = t;
	}
	return (0);
}
