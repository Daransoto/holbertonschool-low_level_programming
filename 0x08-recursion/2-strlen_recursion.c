/**
* _strlen_recursion - Returns the length of a string.
* @s: String to calculate length.
* Return: length of s.
*/
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
