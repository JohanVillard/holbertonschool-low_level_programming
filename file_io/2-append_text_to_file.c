#include "main.h"

/**
 * append_text_to_file -  function that appends text at the end of a file.
 * @filename: is the name of the file.
 * @text_content:  is the NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;	/* File descriptor */
	char *copy_text_content, str_length;
	ssize_t write_bytes = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)	/* fd error handling check */
		return (-1);

	/* Pointer of text_content must stay at the beginning */
	copy_text_content = text_content;

	if (text_content != NULL)
	{
		while (*copy_text_content)
		{
			str_length++;
			copy_text_content++;
		}
	}

	write_bytes = write(fd, text_content, str_length);
	if (write_bytes == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
