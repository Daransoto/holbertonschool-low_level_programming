#include <stdio.h>
/**
* print_array - Prints n elements of an array of integers.
* @a: array.
* @n: Number of elements to print.
*/
void print_array(int *a, int n)
{
	short c = 0;

	while (n-- > 0)
	{
		printf("%d", a[c++]);
		if (n != 0)
			printf(", ");
	}

		printf("\n");
}
