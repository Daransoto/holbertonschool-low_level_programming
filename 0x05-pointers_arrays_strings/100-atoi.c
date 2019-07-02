/**
* _atoi - Converts a string to an integer.
* @s: string to be converted.
* Return: integer value.
*/
int _atoi(char *s)
{
	int sign = 1;
	unsigned int mul = 1, num = 0;

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
	sign *= num;
	return (sign);
}
