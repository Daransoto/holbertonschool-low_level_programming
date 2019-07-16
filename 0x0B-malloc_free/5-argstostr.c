#include <stdlib.h>
/**
* len - Calculates length of string.
* @str: String to evaluate.
* Return: Length of string.
*/
int len(char *str)
{
	int siz = 0;

	while (*str++)
		siz++;

	return (siz);
}
/**
* argstostr - Concatenates all the arguments of your program.
* @ac: Argument counter.
* @av: Argument vector.
* Return: Pointer to concatenated string.
*/
char *argstostr(int ac, char **av)
{
	int i = 0, siz = 1, j = 0;
	char *res, *tmp;

	if (ac == 0 || !av)
		return (0);

	while (i < ac)
		siz += len(av[i++]) + 1;

	res = malloc(siz);
	if (!res)
		return (0);

	tmp = res;
	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
			*tmp++ = av[i][j++];
		*tmp++ = '\n';
		j = 0;
	}
	res[siz - 1] = '\0';
	return (res);
}
