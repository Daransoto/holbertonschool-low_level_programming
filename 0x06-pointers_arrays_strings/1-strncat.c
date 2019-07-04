/**
* _strncat - Concatenates two strings.
* @dest: Destination string.
* @src: String to append.
* @n: Number of bytes to be copied.
* Return: Destination string.
*/
char *_strncat(char *dest, char *src, int n)
{
	char *incr = dest, *incr2 = src;

	while (*(incr++ + 1) != '\0')
		;
	while (n-- > 0)
	{
		*incr++ = *incr2++;
		if (*(incr2 - 1) == '\0')
			break;
	}
	return (dest);
}
