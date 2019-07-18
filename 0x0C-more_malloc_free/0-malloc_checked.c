#include <stdlib.h>
/**
* malloc_checked - Allocates memory using malloc.
* @b: Amount of memory to allocate.
* Return: Pointer to memory allocated.
*/
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (!mem)
		exit(98);

	return (mem);
}
