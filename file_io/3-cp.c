#include "main.h"

void close_error_message(int fd);

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
	ssize_t read_bytes = 0, write_bytes = 0, close_byte = 0;
	char *buffer;

	/* argv[1]: 1st file ----- argv[2]: 2nd file */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (argv[1] == NULL)
	{
		dprintf(STDOUT_FILENO, "Error: %s doesn't exist\n", argv[1]);
		return (-1);
	}
	file_from = open(argv[1], O_RDONLY);	/* Open the file at argv[1]-Read Only */
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Create a file, trunc if exists, if not create it RW for user */
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR |
	S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(98);
	}

	buffer = malloc(1024);	/* Allocate 1024 blocks of memory to the buffer */
	if (buffer == NULL)	/* Malloc error handling */
		return (-1);

	read_bytes = read(file_from, buffer, 1024);
	if (read_bytes == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* file_from is stored into the buffer */
	/* Manage the case if file_from is greater than buffer */
	while (read_bytes > 0)
	{
		/* Write from the buffer to the file */
		write_bytes = write(file_to, buffer, read_bytes);
		if (write_bytes == -1)
		{
			free(buffer);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

		read_bytes = read(file_from, buffer, 1024);
		if (read_bytes == -1)
		{
			free(buffer);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	}

	write_bytes = 0;	/* Everything is already written */
	close_byte = close(file_from);	/* Close the file descriptor */
	if (close_byte == -1)
		close_error_message(file_from);
	close_byte = close(file_to);	/* Close the file descriptor */
	if (close_byte == -1)
		close_error_message(file_to);

	free(buffer);
	buffer = NULL;	/* Eraser buffer */
	return (0);
}

/**
 * close_error_message - print close message
 * @fd: to print
 */
void close_error_message(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
