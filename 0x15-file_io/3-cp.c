#include <stdarg.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUF_SIZE 1024

/**
 * error_exit - exits if there is an error
 *
 * @code: code
 * @format: format
 *
 * Return: nothing
 */

void error_exit(int code, const char *format, ...)
{
	va_list args;

	va_start(args, format);

	dprintf(STDERR_FILENO, "Error: ");
	vdprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(code);
}

/**
 * main - entry point
 *
 * @argc: argument
 * @argv: vector
 *
 * Return: In.
 */

int main(int argc, char **argv)
{
	ssize_t num_read;
	char buf[BUF_SIZE];
	int fd_to;
	int fd_from;

	if (argc != 3)
		error_exit(97, "Usage: %s file_from file_to\n", argv[0]);
	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
		error_exit(98, "Can't read from file %s\n", argv[1]);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd_to == -1)
		error_exit(99, "Can't write to file %s\n", argv[2]);


	while ((num_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		ssize_t num_written = write(fd_to, buf, num_read);

		if (num_written == -1)
		{
			error_exit(99, "Can't write to file %s\n", argv[2]);
		}
		if (num_written != num_read)
		{
			error_exit(99, "Short write to file %s\n", argv[2]);
		}
	}
	if (num_read == -1)
	{
	error_exit(98, "Can't read from file %s\n", argv[1]);
	}
	if (close(fd_from) == -1)
		error_exit(100, "Can't close fd %d\n", fd_from);
	if (close(fd_to) == -1)
		error_exit(100, "Can't close fd %d\n", fd_to);

	return (0);
}
