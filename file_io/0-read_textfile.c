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
	ssize_t write_readBytes = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);	/* Open file */
	if (fd == -1)	/* Open check */
		return (0);

	buffer = malloc(letters);	/* Allocate letters bytes to the buffer */
	if (buffer == NULL)	/* Malloc check */
		return (0);

	/* Put data in the buffer to letters bytes */
	write_readBytes = read(fd, buffer, letters);
	if (write_readBytes == -1)	/* Open check */
		return (0);

	/* Output the buffer to letters bytes */
	write_readBytes = write(1, buffer, write_readBytes);
	if (write_readBytes == -1)
		return (0);

	close(fd);	/* Close the file */
	free(buffer);	/* Free the memory of buffer */

	return (write_readBytes);
}
