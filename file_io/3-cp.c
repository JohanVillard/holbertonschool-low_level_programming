#include "main.h"

/**
 * main - copies the content of a file to another file.
 * @argc: is an integer containing the number of command line arguments.
 * @argv: is an array of pointers to strings containing arguments.
 *
 * Return: ???
 */
int main(int argc, char **argv __attribute__((unused)))
{
	int file_from, file_to; /* Destination file */
	ssize_t read_bytes = 0, write_bytes = 0;
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
			return (-1);

		read_bytes = read(file_from, buffer, 1024);
		if (read_bytes == -1)
		{
			free(buffer);
			close(file_from);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	}
	if (argv[2] != NULL)
	{
		/* Create a file, trunc if exists, if not create it RW for user */
		file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
		if (read_bytes == -1)
		{
			free(buffer);
			close(file_from);
			return (-1);
		}
		write_bytes = write(file_to, buffer,1024);
		if (write_bytes == -1)
		{
			free(buffer);
			close(file_to);
			close(file_from);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(98);
		}
	}
		free(buffer);
		close(file_to);
		close(file_from);
	return (0);
}
