/**
* _strlen - Gives the length of a string.
* @s: String to evaluate.
* Return: The length of the given string.
*/
int _strlen(char *s)
{
	short n = 0;

	for (; s && *s; s++)
		n++;

	return (n);
}
/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: String of 1's and 0's to be converted.
* Return: The equivalent number in decimal.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int pow = 1;
	unsigned int number = 0;
	int length;

	if (!b)
		return (0);
	length = _strlen((char *)b);
	while (length--)
	{
		if (b[length] > '1' || b[length] < '0')
			return (0);
		number += (b[length] - '0') * pow;
		pow *= 2;
	}
	return (number);
}
