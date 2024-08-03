#include "main.h"

void close_all(int file1, int file2);
void w_r_error_handling(int fp, char *buffer, char *argv,
						int file_from, int file_to);

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

	/* argv[1]: 1st file ----- argv[2]: 2nd file */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (argv[1] == NULL || argv[2] == NULL)
		return (-1);

	file_from = open(argv[1], O_RDONLY);	/* Open the file at argv[1]-Read Only */
	close_all(file_from, file_to);	/* Open error handling */

	/* Create a file, trunc if exists, if not create it RW for user */
	file_to = open(argv[2], O_RDWR | O_TRUNC | O_CREAT, S_IRUSR
						| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	close_all(file_to, file_from);	/* Open error handling */

	buffer = malloc(1024);	/* Allocate 1024 blocks of memory to the buffer */
	if (buffer == NULL)	/* Malloc error handling */
		return (-1);

	/* file_from is stored into the buffer */
	/* Manage the case if file_from is greater than buffer */
	while ((read_bytes = read(file_from, buffer, 1024)) > 0)
	{
		w_r_error_handling(read_bytes, buffer, argv[1],
						file_from, file_to);

		write_bytes = write(file_to, buffer, read_bytes);	/* Write from the */
		w_r_error_handling(write_bytes, buffer, argv[2],	/*buffer to the file */
						file_from, file_to);
	}
	w_r_error_handling(read_bytes, buffer, argv[1],
						file_from, file_to);
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

/**
 * w_r_error_handling - handle error
 * if check fails after a call of write and read
 * @fp: to check
 * @buffer: to free
 * @argv: where the error comes from
 * @file_from: to close
 * @file_to: to close
 */
void w_r_error_handling(int fp, char *buffer, char *argv,
						int file_from, int file_to)
{
	if (fp == -1)
	{
		close_all(file_from, file_to);
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		exit(98);
	}
}
