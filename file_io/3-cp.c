#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Prints an error message to stderr and exits
 * @exit_code: Exit status code
 * @format: Format string for dprintf
 * @arg: Argument to include in message
 */
void print_error(int exit_code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(exit_code);
}

/**
 * main - Copies content from one file to another
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success, exits with codes on error
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, r_bytes, w_bytes;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file %s\n", av[1]);

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error(99, "Error: Can't write to %s\n", av[2]);
	}

	while (1)
	{
		r_bytes = read(fd_from, buffer, BUFFER_SIZE);

		if (r_bytes == -1)
		{
			close(fd_from);
			close(fd_to);
			print_error(98, "Error: Can't read from file %s\n", av[1]);
		}

		if (r_bytes == 0)
			break;

		w_bytes = write(fd_to, buffer, r_bytes);
		if (w_bytes == -1 || w_bytes != r_bytes)
		{
			close(fd_from);
			close(fd_to);
			print_error(99, "Error: Can't write to %s\n", av[2]);
		}
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
