/**
* _atoi - Converts a string to an integer.
* @s: string to be converted.
* return: integer value.
*/
int _atoi(char *s)
{
	short sign = 1;
	int num = 0, mul = 1;
	char *t = s;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9' && !(*(s + 1) >= '0' && *(s + 1) <= '9'))
		{
			s++;
			break;
		}
		s++;
	}
	while (s-- > t)
	{
		if (*s >= '0' && *s <= '9')
		{
			num += (*s - '0') * mul;
			mul *= 10;
		}
	}
	num *= sign;
	return (num);
}
