#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
* _strlen - Gives the length of a string.
* @s: String to evaluate.
* Return: The length of the given string.
*/
int _strlen(char *s)
{
	short n = 0;

	if (s)
		while (*s++ != '\0')
			n++;
	return (n);
}
/**
* append_text_to_file - Appends text at the end of a file.
* @filename: Name of the file to append text.
* @text_content: Text to be written in the file.
* Return: 1 if success, -1 otherwise.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, nchars, length;

	if (!filename)
		return (-1);
	file_descriptor = open(filename, O_APPEND | O_WRONLY);
	if (file_descriptor < 0)
		return (-1);
	if (!text_content)
		text_content = "";
	length = _strlen(text_content);
	nchars = write(file_descriptor, text_content, length);
	if (nchars < length)
	{
		close(file_descriptor);
		return (-1);
	}
	close(file_descriptor);
	return (1);
}
