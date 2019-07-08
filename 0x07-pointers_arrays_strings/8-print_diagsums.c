#include <stdio.h>
/**
* print_diagsums - Prints the sum of the two diagonals of a square matrix.
* @a: Matrix to check.
* @size: Size of the matrix.
*/
void print_diagsums(int *a, int size)
{
	int d1 = 0, d2 = 0, i, j;

	for (i = 0, j = 0; i < size; i++, j += size)
		d1 += *(a + i + j), d2 += *(a + size - 1 + j - i);
	printf("%d, %d\n", d1, d2);
}
