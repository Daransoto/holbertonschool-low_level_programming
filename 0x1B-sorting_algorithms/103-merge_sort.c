#include <stdio.h>
#include "sort.h"

/**
 * merge - merge function of the mergesort
 * @array: pointer to array
 * @size: size of the array
 * @left: pointer to left array
 * @right: pointer to right array
 * Return: void
 **/
void merge(int *array, int *left, int *right, size_t size)
{
	int i, j, k, lsize, rsize;

	lsize = size / 2;
	rsize = size - lsize;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(left, lsize);
	printf("[right]: ");
	print_array(right, rsize);

	i = 0;
	j = 0;
	k = 0;

	while (i < lsize && j < rsize)
	{
		if (left[i] < right[j])
			array[k++] = left[i++];
		else
			array[k++] = right[j++];
	}

	while (i < lsize)
		array[k++] = left[i++];

	while (j < rsize)
		array[k++] = right[j++];

	printf("[Done]: ");
	print_array(array, size);
}

/**
 * merge_sort - sorts an array with merge sort
 * @array: array to be evaluated
 * @size: array size
 * Return: void
 **/
void merge_sort(int *array, size_t size)
{
	size_t middle;
	size_t i;
	int pack[1024];
	int *left;
	int *right;

	if (array == NULL || size < 2)
		return;

	middle = size / 2;
	left = pack;
	right = &pack[middle];

	for (i = 0; i < middle; i++)
		left[i] = array[i];

	for (i = middle; i < size; i++)
		right[i - middle] = array[i];

	merge_sort(left, middle);
	merge_sort(right, size - middle);
	merge(array, left, right, size);
}
