#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: file to be read.
 * @text_content:  a NULL terminated string to write to the file
 *
 * Return: integer
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
	ssize_t len = strlen(text_content);
	ssize_t num_written = write(fd, text_content, len);

	if (num_written != len)
	{
		close(fd);
		return (-1);
	}
	}

	close(fd);
	return (1);
}
