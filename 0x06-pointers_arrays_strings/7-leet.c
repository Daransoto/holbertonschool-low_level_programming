/**
* leet - Encodes a string into 1337.
* @s: String to enconde.
* Return: Encoded string.
*/
char *leet(char *s)
{
	char *t = s;
	char c[117];

	c[97] = c[65] = '4';
	c[101] = c[69] = '3';
	c[111] = c[79] = '0';
	c[116] = c[84] = '7';
	c[108] = c[76] = '1';

	while (*s)
	{
		if (*s == 'a' || *s == 'A' || *s == 'e' || *s == 'E' || *s == 'o' ||
		*s == 'O' || *s == 't' || *s == 'T' || *s == 'l' || *s == 'L')
			*s = c[(int)*s];
		s++;
	}
	return (t);
}
