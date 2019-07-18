#include <stdlib.h>
/**
* array_range - Creates an array of integers.
* @min: Number to start from.
* @max: Last number.
* Return: Array with numbers.
*/
int *array_range(int min, int max)
{
	int *arr, i = 0, t = min;

	if (min > max)
		return (0);

	arr = malloc((max - min) + 1);
	if (!arr)
		return (0);
	while (i <= max - min)
		arr[i++] = t++;

	return (arr);
}
