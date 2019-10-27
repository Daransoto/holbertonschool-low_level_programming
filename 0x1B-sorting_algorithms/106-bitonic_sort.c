#include "sort.h"
#include <stdio.h>

/**
* merge - Merges a bitonic array.
* @array: Array to sort.
* @size: Distance for the comparisons.
* @full_size: Size of the array to be sorted.
* @dir: Variable to stablish the direction of sort (0 up 1 down).
*/
void merge(int *array, size_t size, size_t full_size, char dir)
{
	size_t i;
	int temp;

	for (i = 0; i < full_size; i++)
	{
		if (i + size >= full_size)
			break;
		if ((array[i] < array[i + size]) == dir)
		{
			temp = array[i];
			array[i] = array[i + size];
			array[i + size] = temp;
		}
	}
	if (size == 1)
		return;
	merge(array, size / 2, full_size, dir);
}

/**
* bsort - Bitonic sort implemented with recursion.
* @array: Array to sort.
* @size: Size of the current portion of the array to be sorted.
* @full_size: Size of the array complete.
* @dir: Variable to stablish the direction of sort (0 up 1 down).
*/
void bsort(int *array, size_t size, size_t full_size, char dir)
{
	unsigned int s1 = size, s2 = full_size;
	int temp;

	printf("Merging [%u/%u] (%s):\n", s1, s2, dir ? "DOWN" : "UP");
	print_array(array, size);
	if (size <= 2)
	{
		printf("Result [%u/%u] (%s):\n", s1, s2, dir ? "DOWN" : "UP");
		if ((array[0] < array[1]) == dir)
		{
			temp = array[0];
			array[0] = array[1];
			array[1] = temp;
		}
		print_array(array, size);
		return;
	}
	bsort(array, size / 2, full_size, 0);
	bsort(array + size / 2, size / 2, full_size, 1);
	merge(array, size / 2, size, dir);
	printf("Result [%u/%u] (%s):\n", s1, s2, dir ? "DOWN" : "UP");
	print_array(array, size);
}

/**
* bitonic_sort - Implementation of the bitonic sort algorithm.
* @array: Array to sort.
* @size: Size of the array.
*/
void bitonic_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	bsort(array, size, size, 0);
}
