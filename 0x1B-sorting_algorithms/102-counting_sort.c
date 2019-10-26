#include "sort.h"
/**
* counting_sort - Implementation of the counting sort algorithm.
* @array: Array to sort.
* @size: Size of the array.
*/
void counting_sort(int *array, size_t size)
{
	unsigned int i, biggest = 0;
	int *count, *out;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
		if ((unsigned int)array[i] > biggest)
			biggest = array[i];
	count = malloc((biggest + 1) * sizeof(int));
	if (!count)
		return;
	for (i = 0; i <= biggest; i++)
		count[i] = 0;
	for (i = 0; i < size; i++)
		count[array[i]]++;
	for (i = 1; i <= biggest; i++)
		count[i] += count[i - 1];
	print_array(count, biggest + 1);
	out = malloc(size * sizeof(int));
	for (i = 0; i < size; i++)
		out[--count[array[i]]] = array[i];
	for (i = 0; i < size; i++)
		array[i] = out[i];
	free(count);
	free(out);
}
