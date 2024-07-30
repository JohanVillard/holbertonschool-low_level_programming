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
	ssize_t write_bytes = 0, read_bytes = 0;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);	/* Open file */
	if (fd == -1)	/* Open check */
		return (0);
	buffer = malloc(letters);	/* Allocate letters bytes to the buffer */
	if (buffer == NULL)	/* Malloc check */
	{
		close(fd);	/* Don't forget to close file !!! */
		return (0);
	}
	/* Store data from the file fd in the buffer to letters bytes */
	read_bytes = read(fd, buffer, letters);
	if (read_bytes == -1)	/* Open check */
	{
		free(buffer);	/* Don't forget to free memory !!! */
		close(fd);	/* Don't forget to close file !!! */
		return (0);
	}
	/* Print the buffer to read bytes */
	/* Always prefer using symbolic constants  */
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (write_bytes == -1 || write_bytes != read_bytes)
	{
		free(buffer);	/* Don't forget to free memory !!! */
		close(fd);	/* Don't forget to close file !!! */
		return (0);
	}
	close(fd);	/* Close the file */
	free(buffer);	/* Free the memory of buffer */
	return (write_bytes);
}
