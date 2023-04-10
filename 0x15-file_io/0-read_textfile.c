#include "main.h"

/**
 * read_textfile -  reads a text file and
 * prints it to the POSIX standard output.
 * @filename: file to be read.
 * @letters:  number of letters it should read and print
 *
 * Return: Always 0.
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read = 0, bytes_written = 0;
	char *buffer = NULL;

	if (filename == NULL)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
	free(buffer);
	close(fd);
	return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
	free(buffer);
	close(fd);
	return (0);
	}

	free(buffer);
	close(fd);
	return (bytes_written);
}

