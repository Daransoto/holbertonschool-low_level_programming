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
	for (i = 0; i < nmemb; i++)
		*(memory + i * size) = 0;

	return (memory);
}
