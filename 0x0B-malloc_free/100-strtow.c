#include <stdlib.h>
/**
* count_words - Count the number of words on a given string.
* @str: string to count words.
* Return: Amount of words.
*/
int count_words(char *str)
{
	int wc = 0, word = 0;

	for (; *str; str++)
		if (*str != ' ' && !word)
		{
			wc++;
			word = 1;
		}
		else if (*str == ' ')
		{
			word = 0;
		}
	return (wc);
}
/**
* alloc_array - Creates array with words size.
* @tmp: String to evaluate.
* @arr: Array defined to store the result.
* Return: Array ready to be filled.
*/
char **alloc_array(char *tmp, char ***arr)
{
	int wc = 0, word = 0, i = 0;

	for (; *tmp; tmp++)
	{
		if (*tmp != ' ')
		{
			wc++;
			word = 1;
		}
		if ((*tmp == ' ' || !*(tmp + 1)) && word)
		{
			word = 0;
			*(*arr + i) = malloc(wc + 1);
			wc = 0;
			if (!*(*arr + i))
			{
				while (i)
				{
					free(*(*arr + i));
					i--;
				}
				free(*arr);
				free(arr);
				return (0);
			}
			i++;
		}
	}
	return (*arr);
}
/**
* strtow - Splits a string into words.
* @str: String to split.
* Return: Vector of words, or NULL if failed..
*/
char **strtow(char *str)
{
	int wc = 0, word = 0, i = 0, j = 0;
	char **arr;

	if (!str || *str == '\0')
		return (0);
	wc = count_words(str);
	if (!wc)
		return (0);
	arr = malloc((wc + 1) * 8);
	if (!arr)
		return (0);
	arr[wc] = NULL;

	arr = alloc_array(str, &arr);
	if (!arr)
	{
		free(arr);
		return (0);
	}
	for (; *str; str++)
		if (*str != ' ')
		{
			arr[i][j++] = *str;
			word = 1;
		}
		else if (*str == ' ' && word)
		{
			word = 0;
			arr[i++][j] = '\0';
			j = 0;
		}
	return (arr);
}
