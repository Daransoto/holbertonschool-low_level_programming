#include <stdlib.h>
/**
* create_array - Creates an array of chars, and initializes it with a char.
* @size: Size of the array.
* @c: char to fill the array.
* Return: Pointer to memory allocated.
*/
char *create_array(unsigned int size, char c)
{
	if (size <= 0)
		return (0);

	char *memory = malloc(size);
	unsigned short counter = 0;

	while (counter < size)
		memory[counter++] = c;

	return (memory);
}
