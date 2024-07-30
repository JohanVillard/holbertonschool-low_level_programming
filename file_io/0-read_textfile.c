#include "main.h"

/**
 * read_textfile - reads a text file
 * and prints it to the POSIX standard output.
 * @filename: string containing filepath
 * @letters: number of letter to read and print.
 *
 * Return: the actual number of letters it could read and print .
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	char *buffer;	/* Create a buffer */
	/* ssize_t represents the size of an allocated block of memory, but signed  */
	ssize_t readBytes, writeBytes;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);	/* Open file */
	if (fd == -1)	/* Open check */
		return (0);

	buffer = malloc(1024);	/* Allocate 1024 bytes to the buffer */
	if (buffer == NULL)	/* Malloc check */
		return (0);

	/* Put data in the buffer to letters bytes */
	readBytes = read(fd, buffer, letters);
	if (readBytes == -1)	/* Open check */
		return (0);

	/* Output the buffer to letters bytes */
	writeBytes = write(1, buffer, letters);
	if (writeBytes == -1 || writeBytes != (ssize_t)letters)
		return (0);

	close(fd);	/* Close the file */
	free(buffer);	/* Free the memory of buffer */

	return (readBytes);
}
