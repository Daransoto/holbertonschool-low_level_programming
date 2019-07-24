/**
* int_index - Searches for an integer.
* @array: array to be used.
* @size: Number of elements of the array.
* @cmp: Function to compare.
* Return: Index of first element found, or -1 if not.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
