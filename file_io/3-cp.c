#include "main.h"

void close_all(int file1, int file2);

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
	ssize_t read_bytes = 0, write_bytes = 0;
	char *buffer;


	if (argc != 3)	/* argv[1]: 1st file ----- argv[2]: 2nd file */
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (argv[1] == NULL || argv[2] == NULL)
		return (-1);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)	/* Open the file at argv[1]-Read Only */
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}

	/* Create a file, trunc if exists, if not create it RW for user */
	file_to = open(argv[2], O_RDWR | O_TRUNC | O_CREAT, S_IRUSR
						| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[1]);
		exit(99);

	}

	buffer = malloc(1024);	/* Allocate 1024 blocks of memory to the buffer */
	if (buffer == NULL)	/* Malloc error handling */
		return (-1);

	/* file_from is stored into the buffer */
	/* Manage the case if file_from is greater than buffer */
	while ((read_bytes = read(file_from, buffer, 1024)) > 0)
	{
		if (read_bytes == -1)
		{
			close_all(file_from, file_to);
			free(buffer);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
			exit(98);
		}

		write_bytes = write(file_to, buffer, read_bytes);	/* Write from the */
		if (write_bytes == -1)
		{
			close_all(file_from, file_to);
			free(buffer);
			dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[1]);
			exit(99);
		}
	}
	if (read_bytes == -1)
	{
		close_all(file_from, file_to);
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	write_bytes = 0; /* Everything is already written */
	close_all(file_from, file_to);	/* Close all files and check if no error */
	free(buffer);
	buffer = NULL;	/* Eraser buffer */
	return (0);
}

/**
 * close_all - close and check all files
 * @file1: to close
 * @file2: to close
 *
 * Return: Always nothing
 */
void close_all(int file1, int file2)
{
	if (close(file1 == -1))	/* If closing fails */
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %u\n", file1);
		exit(100);
	}
	if (close(file2 == -1))	/* If closing fails */
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %u\n", file2);
		exit(100);
	}
}
