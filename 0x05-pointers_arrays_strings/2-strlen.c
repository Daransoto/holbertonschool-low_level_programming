/**
* _strlen - Gives the length of a string.
* @s: String to evaluate.
* Return: The length of the given string.
*/
int _strlen(char *s)
{
	short n = 0;

	while (*s != '\0')
	{
		s++;
		n++;
	}
	return (n);
}
