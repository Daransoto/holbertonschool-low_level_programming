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
 * partition - Hoare partition scheme for Quicksort
 * @array: Array to be parted
 * @size: size of the whole array
 * @left: start index
 * @right: end index
 * Return: Index to use as partition
 */
int partition(int *array, int size, int left, int right)
{
	int pivot, i, j;

	pivot = array[right];
	i = left - 1;
	j = right + 1;

	while (1)
	{
		do {
			i++;
		} while (array[i] < pivot);

		do {
			j--;
		} while (array[j] > pivot);

		if (i >= j)
			return (j);

		swap(&array[i], &array[j]);
		print_array(array, size);
	}
}

/**
 * hoare_qs - Lomuto implementation of Quicksort
 * @array: Array to be sorted
 * @size: size of the whole array
 * @left: start index
 * @right: end index
 * @part: old partition
 * Return: void
 */
void hoare_qs(int *array, int size, int left, int right, int part)
{
	int new_part;

	if (left < right)
	{
		new_part = partition(array, size, left, right);
			if (part == new_part)
				part = new_part - 1;
			else
				part = new_part;

		hoare_qs(array, size, left, part, new_part);
		hoare_qs(array, size, part + 1, right, new_part);
	}

}

/**
 * quick_sort_hoare - Sort an array using QuickSort
 * @array: Array to be sorted
 * @size: Size of the array
 * Return: void
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	hoare_qs(array, size, 0, size - 1, size);
}
