/**
* _strcpy - Copies a string to another string.
* @src: - Source string.
* @dest: Destination string.
* Return: Pointer to destination string.
*/
char *_strcpy(char *dest, char *src)
{
	short c = 0;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		c++;
	}
	*dest = '\0';
	return (dest - c);
}
