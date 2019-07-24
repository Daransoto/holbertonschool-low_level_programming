/**
* array_iterator - Executes a specified function over each element of an array.
* @array: array to be used.
* @size: Number of elements of the array.
* @action: Function to be used.
*/
void array_iterator(int *array, short size, void (*action)(int))
{
	short i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
