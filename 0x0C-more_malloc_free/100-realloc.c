#include <stdlib.h>
/**
* _realloc - Rallocates a memory block using malloc and.
* @ptr: Old pointer.
* @old_size: Size of old pointer.
* @new_size: New desired size.
* Return: New pointer with new size.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (!ptr)
	{
		ptr = malloc(new_size);
	}
	else if (!new_size)
	{
		free(ptr);
		return (0);
	}
	else
	{
		new = malloc(new_size);
		if (!new)
			return (0);

		for (i = 0; i < old_size; i++)
		{
			new[i] = ((char *) ptr)[i];
		}
	}
	return (new);
}
