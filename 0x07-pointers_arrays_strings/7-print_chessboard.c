#include "holberton.h"
/**
* print_chessboard - Prints the chessboard.
* @a: Chessboard to print.
*/
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i++ < 8)
	{
		while (j++ < 8)
			_putchar(a[i - 1][j - 1]);
		j = 0;
		_putchar('\n');
	}
}
