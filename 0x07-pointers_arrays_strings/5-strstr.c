/**
* _strstr - Locates a substring.
* @haystack: Input string.
* @needle: Substring to search.
* Return: Address of substring in haystack or 0 if not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
			if (*haystack++ != *needle++)
				break;
		if (!*needle)
			return (result);
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
