#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - Allocates memory using malloc.
* @b: Amount of memory to allocate.
* Return: Pointer to memory allocated.
*/
void *malloc_checked(unsigned int b)
{
	void *poin = malloc(b);

	if (!poin)
		exit(98);

	return (poin);
}
