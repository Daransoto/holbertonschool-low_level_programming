/**
* _strncpy - Copies a string.
* @dest: Destination string.
* @src: String to be copied.
* @n: Number of bytes to be copied.
* Return: Destination string.
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest, *temp2 = src;

	while (n-- > 0)
	{
		*temp++ = *temp2++;
		if (*(temp2 - 1) == '\0')
		{
			while (n-- > 0)
				*temp++ = '\0';
		}
	}
	return (dest);
}
