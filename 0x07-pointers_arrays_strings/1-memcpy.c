/**
* _memcpy - Copies memory area.
* @dest: Destination memory address.
* @src: Source memory address.
* @n: Number of bytes to be copied.
* Return: Pointer to destination memory.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *r = dest;

	while (i++ < n)
		* dest++ = *src++;
	return (r);
}
