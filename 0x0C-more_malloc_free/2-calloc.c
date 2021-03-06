#include <stdlib.h>
/**
* _calloc - Allocates memory for an array.
* @nmemb: Number of elements.
* @size: Size in bytes of each element.
* Return: Pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int i = 0;

	if (nmemb <= 0 || size <= 0)
		return (0);

	memory = malloc(nmemb * size);
	if (!memory)
		return (0);
	for (i = 0; i < nmemb * size; i++)
		*(memory + i) = 0;

	return (memory);
}
