/**
* _memset - Fills memory with a constant byte.
* @s: String to fill.
* @b: Character used to fill the string.
* @n: Number of bytes to fill.
* Return: Address of string.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *t = s;

	while (i++ < n)
		*s++ = b;
	return (t);
}
