#include "sort.h"
/**
* selection_sort - Implementation of the selection sort.
* @array: Array to be sorted.
* @size: Size of the array.
*/
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, selected;
	int temp;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		selected = i;
		for (j = i + 1; j < size; j++)
			if (array[selected] > array[j])
				selected = j;
		if (selected == i)
			continue;
		temp = array[i];
		array[i] = array[selected];
		array[selected] = temp;
		print_array(array, size);
	}
}
