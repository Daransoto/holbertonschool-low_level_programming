#include <stdlib.h>
/**
* calloc
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int i = 0;

	if (!nmemb || !size)
		return (0);

	memory = malloc(nmemb * size);
	for (i = 0; i < nmemb; i++)
		*(memory + i * size) = 0;

	return (memory);
}
