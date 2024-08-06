#include "main.h"

void close_error_message(int fd);
void _write(int file_to, char *buffer, char *arg, ssize_t  read_bytes);
int _read(int file_from, char *buffer, char *arg);
void _close(int fd);

/**
 * main - copies the content of a file to another file.
 * @argc: is an integer containing the number of command line arguments.
 * @argv: is an array of pointers to strings containing arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int file_from = 0, file_to = 0; /* Destination file */
	ssize_t read_bytes = 0;
	char *buffer;

	/* argv[1]: 1st file ----- argv[2]: 2nd file */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);	/* Open the file at argv[1]-Read Only */
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Create a file, trunc if exists, if not create it W for user */
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_to < 0)
	{
		_close(file_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	buffer = malloc(1024);	/* Allocate 1024 blocks of memory to the buffer */
	if (buffer == NULL)	/* Malloc error handling */
	{
		_close(file_from);
		_close(file_to);
		return (-1);
	}

	/* file_from is stored into the buffer */
	/* Manage the case if file_from is greater than buffer */
	while ((read_bytes = _read(file_from, buffer, argv[1])) > 0)
	{
		/* Write from the buffer to the file and handle error*/
		_write(file_to, buffer, argv[2], read_bytes);
	}

	_close(file_from);
	_close(file_to);

	free(buffer);
	buffer = NULL;	/* Eraser buffer */

	return (0);
}

/**
 * _close - print close message
 * @fd: to close and check
 */
void _close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * _write - write and handle error
 * @buffer: source
 * @file_to: where to write
 * @arg: to print if write fails
 * @read_bytes: is the fd of read call
 *
 * Return: Always nothing
 */
void _write(int file_to, char *buffer, char *arg, ssize_t  read_bytes)
{
	/* Write from the buffer to the file */
	if (write(file_to, buffer, read_bytes) < 0)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg);
		exit(99);
	}
}

/**
 * _read- read and handle error
 * @buffer: to store read
 * @file_from: where to read
 * @arg: to print if write fails
 *
 * Return: Return file descriptor, exit(98) if fail
 */
int _read(int file_from, char *buffer, char *arg)
{
	size_t buffer_size = 1024;
	int fd = 0;

	/* Write from the buffer to the file */
	fd = read(file_from, buffer, buffer_size);
	if (fd == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);
		exit(98);
	}

	return (fd);
}
