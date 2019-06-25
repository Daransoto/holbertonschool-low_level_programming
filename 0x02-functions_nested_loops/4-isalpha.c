#include "holberton.h"
/**
* _isalpha - Checks if a character is alphabetic.
* @c: character to be evaluated.
* Return: 1 if the character is alphabetic and 0 if it is not.
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
