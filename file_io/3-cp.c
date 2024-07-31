#include "main.h"

void close_and_check(int *fd, ssize_t *close_bytes);

/**
 * main - copies the content of a file to another file.
 * @argc: is an integer containing the number of command line arguments.
 * @argv: is an array of pointers to strings containing arguments.
 *
 * Return: ???
 */
int main(int argc, char **argv)
{
	int file_from, file_to; /* Destination file */
	ssize_t read_bytes = 0, write_bytes = 0, close_bytes = 0;
	char *buffer;

	/* argv[1]: 1st file ----- argv[2]: 2nd file */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = malloc(1024);	/* Allocate 1024 blocks of memory to the buffer */
	if (buffer == NULL)	/* Malloc error handling */
		return (-1);

	if (argv[1] != NULL)	/* Check if file exist */
	{
		file_from = open(argv[1], O_RDONLY);	/* Open the file at argv[1]-Read Only */
		if (file_from == -1)	/* Open error handling */
		{
			free(buffer);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		read_bytes = read(file_from, buffer, 1024);	/* file_from is stored into the buffer */
		if (read_bytes == -1)
		{
			free(buffer);

			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	}
	if (argv[2] != NULL)
	{
		/* Create a file, trunc if exists, if not create it RW for user */
		file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
		if (file_to == -1)
		{
			free(buffer);

			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		write_bytes = write(file_to, buffer, read_bytes);
		if (write_bytes == -1)
		{
			free(buffer);

			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	free(buffer);

	/* Close file and check if no error */
	close_and_check(&file_to, &close_bytes);
	close_and_check(&file_from, &close_bytes);

	return (0);
}

/**
 * close_and_check - vlose file and check if no error
 * @fd: is the file descriptor to close
 * @close_bytes:  -1 if error
 */
void close_and_check(int *fd, ssize_t *close_bytes)
{
	*close_bytes = close(*fd);	/* Close the file descriptor */
	if (*close_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %lu\n", *close_bytes);
		exit(100);
	}
}


