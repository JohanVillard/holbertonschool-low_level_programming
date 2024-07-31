#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename:  is the name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, str_length = 0;
	char *copy_text_content; /* Avoid to move original pointer */
	ssize_t bytes_write = 0;

	if (filename == NULL)
		return (-1);

	/* O_RDWR: Open the file in read-write mode. */
	/* O_CREAT: Create the file if it doesn't exist. */
	/* O_TRUNC: Truncate the file to zero length if it exists. */
	/* S_IRUSR (or S_IREAD): Read permission for the owner (user). */
	/* S_IWUSR (or S_IWRITE): Write permission for the owner (user). */
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)	/* fd error handling check */
		return (-1);

	copy_text_content = text_content;	/* text_content must not move */

	if (text_content != NULL)	/* Write if necessary */
	{
		/* Must know the size to write */
		while (*copy_text_content)
		{
			str_length++;
			copy_text_content++;
		}
	}

	bytes_write = write(fd, text_content, str_length);
	if (bytes_write == -1)	/* bytes_write error handling check */
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
