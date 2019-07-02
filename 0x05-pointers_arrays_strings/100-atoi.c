/**
* _atoi - Converts a string to an integer.
* @s: string to be converted.
* Return: integer value.
*/
int _atoi(char *s)
{
	short sign = 1;
	int num = 0, mul = 1;

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
	s--;
	while (*s >= '0' && *s <= '9')
	{
		num += (*s - '0') * mul;
		mul *= 10;
		s--;
	}
	num *= sign;
	return (num);
}
