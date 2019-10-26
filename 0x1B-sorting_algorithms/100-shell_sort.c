#include "sort.h"
/**
* shell_sort - Implementation of the shell sort algoritm.
* @array: Array to sort.
* @size: Size of the array.
*/
void shell_sort(int *array, size_t size)
{
	int temp;
	unsigned int knuth = 1, i, j, smallest;

	if (size < 2)
		return;
	while (knuth < size)
		knuth = knuth * 3 + 1;
	while (knuth > 1)
	{
		knuth = (knuth - 1) / 3;
		for (i = 0; i < size - 1; i++)
		{
			smallest = i;
			for (j = i + knuth; j < size; j += knuth)
			{
				if (array[j] < array[smallest])
				{
					smallest = j;
				}
			}
			temp = array[smallest];
			array[smallest] = array[i];
			array[i] = temp;
		}
		print_array(array, size);
	}
}
