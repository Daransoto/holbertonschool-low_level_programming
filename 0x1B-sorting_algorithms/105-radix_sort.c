#include "sort.h"

/**
 * reset - resets an array
 * @array: array to reset
 * @size: size of the array
 * Return: void
 */
void reset(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
		array[i] = 0;
}

/**
 * get_digits_largest - get num of digits
 * @array: array to check
 * @size: size of the array
 * Return: number of digits
 */
int get_digits_largest(int *array, size_t size)
{
	int number;
	int digits;
	size_t i;

	number = 0;
	digits = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] > number)
			number = array[i];
	}

	while (number != 0)
	{
		number /= 10;
		digits++;
	}

	return (digits);
}

/**
 * get_digit - get a spefic digit of a number
 * @number: number to extract digit
 * @digit: digit count
 * Return: the digit
 */
int get_digit(int number, int digit)
{
	int den, dig, i;

	dig = digit - 1;
	den = 1;

	for (i = 0; i < dig; i++)
		den *= 10;

	return ((number / den) % 10);
}

/**
 * radix_sort - sorts an array of integers
 * in ascending order using the Radix sort algorithm
 * @array: Array to sort
 * @size: size of the array
 * Return: void
 */
void radix_sort(int *array, size_t size)
{
	int value;
	int *buckets, *result;
	size_t i, j, max_iters;

	if (array == NULL || size < 2)
		return;

	buckets = malloc(sizeof(int) * 10);
	result = malloc(sizeof(int) * size);

	if (!buckets || !result)
		return;

	reset(result, size);
	max_iters = get_digits_largest(array, size);

	for (i = 1; i <= max_iters; i++)
	{
		for (j = 0; j < size; j++)
		{
			value = get_digit(array[j], i);
			buckets[value] += 1;
		}
		for (j = 1; j < 10; j++)
			buckets[j] = buckets[j - 1] + buckets[j];
		for (j = size - 1; j > 0; j--)
		{
			buckets[get_digit(array[j], i)] -= 1;
			result[buckets[get_digit(array[j], i)]] = array[j];
		}
		buckets[get_digit(array[j], i)] -= 1;
		result[buckets[get_digit(array[j], i)]] = array[j];
		for (j = 0; j < size; j++)
			array[j] = result[j];
		print_array(array, size);
		reset(buckets, 10);
		reset(result, size);
	}
	free(buckets);
	free(result);
}
