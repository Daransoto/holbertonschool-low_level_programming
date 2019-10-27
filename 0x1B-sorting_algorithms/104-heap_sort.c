#include "sort.h"

/**
* node_max - Finds the index of the max int on a node of a heap.
* @array: Array containing the elements.
* @size: Size of the array.
* @i: Index of the top of the node.
* @j: Index of the left of the node.
* @k: Index of the right of the node.
* Return: Index of the max element of the node.
*/
size_t node_max(int *array, size_t size, size_t i, size_t j, size_t k)
{
	size_t max = i;

	if (j < size && array[j] > array[max])
		max = j;
	if (k < size && array[k] > array[max])
		max = k;
	return (max);
}

/**
* siftdown - Sorts a node of a heap, biggest elements up.
* @array: Array to be sorted.
* @size_u: Size of the unsorted array.
* @i: Index of the current node to sort.
* @size: Size of the array.
*/
void siftdown(int *array, size_t size_u, size_t i, size_t size)
{
	size_t j;
	int temp;

	while (1)
	{
		j = node_max(array, size_u, i, 2 * i + 1, 2 * i + 2);
		if (j == i)
			break;
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		i = j;
		print_array(array, size);
	}
}

/**
* heap_sort - Implementation of the heap sort algorithm.
* @array: Array to sort.
* @size: Size of the array.
*/
void heap_sort(int *array, size_t size)
{
	size_t i;
	int temp;

	if (size < 2 || !array)
		return;
	for (i = size / 2 - 1; (int)i >= 0; i--)
		siftdown(array, size, i, size);
	for (i = 0; i < size; i++)
	{
		temp = array[size - i - 1];
		array[size - i - 1] = array[0];
		array[0] = temp;
		if (size - i - 1 != 0)
			print_array(array, size);
		siftdown(array, size - i - 1, 0, size);
	}
}
