/**
* _strcat - Concatenates two strings.
* @dest: Destination string.
* @src: String to append.
* Return: Destination string.
*/
char *_strcat(char *dest, char *src)
{
	char *incr = dest, *incr2 = src;

	while (*(incr++ + 1) != '\0')
		;
	while (*incr2++ != '\0')
		*incr++ = *(incr2 - 1);
	*incr = '\0';
	return (dest);
}
