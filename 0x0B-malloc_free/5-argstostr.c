#include <stdlib.h>
/**
* len - Calculates length of string.
* @str: String to evaluate.
* Return: Length of string.
*/
int len(char *str)
{
	int size = 0;

	while (*str++)
		size++;

	return (size);
}
/**
* argstostr - Concatenates all the arguments of your program.
* @ac: Argument counter.
* @av: Argument vector.
* Return: Pointer to concatenated string.
*/
char *argstostr(int ac, char **av)
{
	int i = 1, size = 1, j = 0;
	char *res, *tmp;

	if (ac < 2 || av == NULL)
		return (0);

	while (i < ac)
		size += len(av[i++]) + 1;

	res = malloc(size);
	if (!res)
		return (0);

	tmp = res;
	for (i = 1; i < ac; i++)
	{
		while (av[i][j])
			*tmp++ = av[i][j++];
		*tmp++ = '\n';
		j = NULL;
	}
	res[size - 1] = '\0';
	return (res);
}
