#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
* read_textfile - Reads a text file and prints it to the POSIX standard output.
* @filename: Name of the file to be read.
* @letters: Number of letters it should read and print.
* Return: Number of letters it could read and print.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, nchars, write_check;
	char *buffer;

	if (!filename || !letters)
		return (0);
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor < 0)
		return (0);
	buffer = malloc(letters + 1);
	if (!buffer)
	{
		close(file_descriptor);
		return (0);
	}
	nchars = read(file_descriptor, buffer, letters);
	if (nchars <= 0)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	write_check = write(STDOUT_FILENO, buffer, nchars);
	if (write_check < nchars)
		return (0);
	free(buffer);
	close(file_descriptor);
	return (nchars);
}
