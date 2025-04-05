#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

void print_error(int code, const char *format, const char *arg);
void check_arguments(int ac);
int open_source_file(const char *file);
void close_file(int fd);
void read_and_copy(int fd_from, const char *file_to, const char *file_from);

/**
 * print_error - Prints an error message and exits
 * @code: Exit code
 * @format: Error message format
 * @arg: Argument for format string
 */
void print_error(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}

/**
 * check_arguments - Validates argument count
 * @ac: Argument count
 */
void check_arguments(int ac)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * open_source_file - Opens file_from safely
 * @file: Name of the source file
 *
 * Return: File descriptor of source file
 */
int open_source_file(const char *file)
{
	int fd = open(file, O_RDONLY);

	if (fd == -1)
		print_error(98, "Error: Can't read from file %s\n", file);

	return (fd);
}

/**
 * close_file - Closes a file descriptor with error checking
 * @fd: File descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * read_and_copy - Reads from file_from and writes to file_to
 * @fd_from: Source file descriptor
 * @file_to: Name of the destination file
 * @file_from: Name of the source file (for error messages)
 */
void read_and_copy(int fd_from, const char *file_to, const char *file_from)
{
	int fd_to;
	ssize_t r_bytes, w_bytes;
	char buffer[BUFFER_SIZE];

	r_bytes = read(fd_from, buffer, BUFFER_SIZE);
	if (r_bytes == -1)
	{
		close_file(fd_from);
		print_error(98, "Error: Can't read from file %s\n", file_from);
	}

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_file(fd_from);
		print_error(99, "Error: Can't write to %s\n", file_to);
	}

	while (r_bytes > 0)
	{
		w_bytes = write(fd_to, buffer, r_bytes);
		if (w_bytes == -1 || w_bytes != r_bytes)
		{
			close_file(fd_from);
			close_file(fd_to);
			print_error(99, "Error: Can't write to %s\n", file_to);
		}

		r_bytes = read(fd_from, buffer, BUFFER_SIZE);
		if (r_bytes == -1)
		{
			close_file(fd_from);
			close_file(fd_to);
			print_error(98, "Error: Can't read from file %s\n", file_from);
		}
	}

	close_file(fd_from);
	close_file(fd_to);
}

/**
 * main - Entry point
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd_from;

	check_arguments(ac);
	fd_from = open_source_file(av[1]);
	read_and_copy(fd_from, av[2], av[1]);

	return (0);
}
