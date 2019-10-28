#include "sort.h"

/**
 * swap - swaps two array pointers
 * @left: A pointer
 * @right: Another pointer
 * Return: void
 */
void swap(int *left, int *right)
{
	int temp;

	temp = *left;
	*left = *right;
	*right = temp;
}

/**
 * partition - Lomuto's partition scheme for Quicksort
 * @array: Array to be parted
 * @size: size of the whole array
 * @left: start index
 * @right: end index
 * Return: Index to use as partition
 */
int partition(int *array, int size, int left, int right)
{
	int pivot, part_index, j;

	pivot = array[right];
	part_index = left;

	for (j = left; j < right; j++)
	{
		if (array[j] <= pivot)
		{
			swap(&array[part_index], &array[j]);
			if (part_index != j)
				print_array(array, size);
			part_index++;
		}
	}
	swap(&array[part_index], &array[right]);
	if (part_index != j)
		print_array(array, size);
	return (part_index);
}

/**
 * lomuto_qs - Lomuto implementation of Quicksort
 * @array: Array to be sorted
 * @size: size of the whole array
 * @left: start index
 * @right: end index
 * Return: void
 */
void lomuto_qs(int *array, int size, int left, int right)
{
	int part;

	if (left < right)
	{
		part = partition(array, size, left, right);
		lomuto_qs(array, size, left, part - 1);
		lomuto_qs(array, size, part + 1, right);
	}

}

/**
 * quick_sort - Sort an array using QuickSort
 * @array: Array to be sorted
 * @size: Size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	lomuto_qs(array, size, 0, size - 1);
}
