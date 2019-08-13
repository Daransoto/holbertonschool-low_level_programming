#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, nchars;
	char *buffer;

	file_descriptor = open(filename, O_RDONLY);
	if (!filename || !letters || file_descriptor < 0)
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
	write(STDOUT_FILENO, buffer, nchars);
	free(buffer);
	close(file_descriptor);
	return (nchars);
}
