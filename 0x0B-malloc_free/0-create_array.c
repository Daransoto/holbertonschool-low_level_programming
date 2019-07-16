#include <stdlib.h>
/**
* create_array - Creates an array of chars, and initializes it with a char.
* @size: Size of the array.
* @c: char to fill the array.
* Return: Pointer to memory allocated.
*/
char *create_array(unsigned int size, char c)
{
	char *memory;
	unsigned short counter = 0;

	if (size <= 0)
		return (0);

	memory = malloc(size);
	while (counter < size)
		memory[counter++] = c;

	return (memory);
}
