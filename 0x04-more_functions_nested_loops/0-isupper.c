/**
* _isupper - Checks for uppercase character.
* @c: Character to be evaluated.
* Return: 1 if c is uppercase, else 0.
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
