/**
* _strchr - Locates a character in a string.
* @s: String in which the character will be searched.
* @c: Character to search.
* Return: Address to the first occurrence of character or NULL if not there.
*/
char *_strchr(char *s, char c)
{
	while (*s++)
		if (*(s - 1) == c)
			return (s - 1);
	return (0);
}
