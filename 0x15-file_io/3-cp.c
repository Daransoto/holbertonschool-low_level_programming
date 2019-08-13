#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
/**
* read_error - Handle of error reading a file.
* @filename: Filename tried to be read.
*/
void read_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}
/**
* write_error - Handle of error writing a file.
* @filename: Filename tried to be written.
*/
void write_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}
/**
* main - Entry point.
* @argc: Argument counter.
* @argv: Argument vector.
* Return: 0 if success.
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_chars = 1024;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
		read_error(argv[1]);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to < 0)
	{
		close(fd_from);
		write_error(argv[2]);
	}
	while (read_chars == 1024)
	{
		read_chars = read(fd_from, buff, 1024);
		if (read_chars < 0)
			read_error(argv[1]);
		if (write(fd_to, buff, read_chars) < read_chars)
			write_error(argv[2]);
	}
	if (close(fd_from) < 0)
	{
		close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
