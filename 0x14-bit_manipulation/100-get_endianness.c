/**
* get_endianness - Checks the endianness.
* Return: 1 if little endian or 0 if big endian.
*/
int get_endianness(void)
{
	unsigned int check = 1;
	char *byte = (char *)&check;

	if (*byte & 1)
		return (1);
	else
		return (0);
}
