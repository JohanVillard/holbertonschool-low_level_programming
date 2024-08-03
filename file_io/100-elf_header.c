#include "main.h"

void print_entry_point(unsigned char *header);
void print_elf_file_type(unsigned char *header);
void print_abi(unsigned char *header);
void print_endianness(unsigned char *header);
void print_bit_format(unsigned char *header);
void print_version(unsigned char *header);
void print_magic(unsigned char *header, char *arg);
void fd_error_handling(int fd, char *arg);

/**
 * main - implement readelf function
 * @argc: store the number of argument
 * @argv: array of pointer pointing strings storing argument
 *
 * Return: Always nothing
 */
int main(int argc, char **argv)
{
	int o_fd = 0, r_fd = 0, c_fd;
	unsigned char header[64];

	if (argc != 2)	/* Argument's number check */
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	o_fd = open(argv[1], O_RDONLY);	/* Open the second argument */
	fd_error_handling(o_fd, argv[1]);

	r_fd = read(o_fd, header, 64);	/* Read the header of ELF file->64 bytes max */
	fd_error_handling(r_fd, argv[1]);

	print_magic(header, argv[1]);
	print_bit_format(header);
	print_endianness(header);
	print_version(header);
	print_abi(header);
	print_elf_file_type(header);
	print_entry_point(header);

	c_fd = close(o_fd);
	fd_error_handling(c_fd, argv[1]);

	return (0);
}

/**
 * print_entry_point - print the address of entry point
 * @header: is the first line of ELF file
 *
 * Return: Always nothing
 */
void print_entry_point(unsigned char *header)
{
	int total_bytes_address = 0, max_offset_entry_point = 0, i = 0, j = 0;
	int entry_point[8] = {0}, flag = 0;

	printf("  Entry point address:		     0x");
	if (header[EI_CLASS] == ELFCLASS32)	/* 32 bit format */
	{
		total_bytes_address = 4;	/* Set 32 bit variables */
		max_offset_entry_point = 27;
	}
	else	/* 64 bit format */
	{
		total_bytes_address = 8;	/* Set 32 bit variables */
		max_offset_entry_point = 31;
	}
	if (header[5] == 1)	/* Little endian */
	{
		for (i = max_offset_entry_point; i >= 24; i--, j++)
			entry_point[j] = header[i];
	}
	else /* Big endian */
	{
		for (i = 24; i <= max_offset_entry_point; i++, j++)
			entry_point[j] = header[i];
	}

	for (i = 0; i < total_bytes_address; i++)	/* Print entry point */
	{
		if (entry_point[i] != 0 && flag == 0)
		{
			printf("%x", entry_point[i]);
			flag = 1;
		}
		else if (flag == 1)
			printf("%02x", entry_point[i]);
	}
	printf("\n");
}

/**
 * print_elf_file_type - print the type of the file
 * @header: is the first line of ELF file
 *
 * Return: Always nothing
 */
void print_elf_file_type(unsigned char *header)
{
	elf_type_t elf_type_sheet[] = {
		{0x00, "NONE", "(Unknown)"},
		{0x01, "REL", "(Relocatable file)"},
		{0x02, "EXEC", "(Executable file)"},
		{0x03, "DYN", "(Shared object)"},
		{0x04, "CORE", "(Core file)"},
		{0xFE00, "LOOS", "(Reserved inclusive range)"},
		{0xFEFF, "HIOS", "(Reserved inclusive range)"},
		{0xFF00, "LOPROC", "(Reserved inclusive range)"},
		{0xFFFF, "HIPROC", "(Reserved inclusive range)"},
		{-1, NULL, NULL},
	};
	int i = 0;

	while (elf_type_sheet[i].type != NULL)
	{
		if (header[16] == elf_type_sheet[i].value)
			printf("  Type:				     %s %s\n",
			elf_type_sheet[i].type, elf_type_sheet[i].description);
		i++;
	}
}

/**
 * print_abi - print the abi and his version
 * @header: is the first line of ELF file
 *
 * Return: Always nothing
 */
void print_abi(unsigned char *header)
{
	abi_list_t abi_sheet[] = {
		{0x00, "UNIX - System V"},
		{0x01, "HP - UX"},
		{0x02, "UNIX - NetBSD"},
		{0x03, "Linux"},
		{0x04, "GNU Hurd"},
		{0x06, "UNIX - Solaris"},
		{0x07, "AIX(Monterey)"},
		{0x08, "IRIX"},
		{0x09, "FreeBSD"},
		{0x0a, "Tru64"},
		{0x0b, "Novell Modesto"},
		{0x0c, "OpenBSD"},
		{0x0d, "OpenVMS"},
		{0x0e, "NonStop Kernel"},
		{0x0f, "AROS"},
		{0x10, "FenixOS"},
		{0x11, "Nuxi CloudABI"},
		{0x12, "Stratus Technologies OpenVOS"},
		{-1, NULL},
	};
	int i = 0;

	while (abi_sheet[i].abi != NULL)
	{
		if (header[EI_OSABI] == abi_sheet[i].value)
			printf("  OS/ABI:			     %s\n", abi_sheet[i].abi);
		i++;
	}

	printf("  ABI Version:			     %d\n", header[EI_ABIVERSION]);
}

/**
 * print_bit_format - print 32 or 64 bit
 * @header: is the first line of ELF file
 *
 * Return: Always nothing
 */
void print_bit_format(unsigned char *header)
{
	if (header[EI_CLASS] == ELFCLASS64)	/* 32 or 64 bit format */
		printf("  Class:			     ELF64\n");
	else
		printf("  Class:			     ELF32\n");
}

/**
 * print_version - ...
 * @header: is the first line of ELF file
 *
 * Return: Always nothing
 */
void print_version(unsigned char *header)
{
	if (header[EI_VERSION] == EV_CURRENT)	/* 99,99% of time it is set to 1 */
		printf("  Version:			     1 (current)\n");
	else
		printf("  Version:			     0 (invalid)\n");
}

/**
 * print_endianness - print endianness
 * @header: is the first line of ELF file
 *
 * Return: Always nothing
 */
void print_endianness(unsigned char *header)
{
	/* 2's complement: Notation to represent signed integers */
	/* Endianness */
	if (header[EI_DATA] == ELFDATA2MSB)
		printf("  Data:				     2's complement, big endian\n");
	else
		printf("  Data:				     2's complement, little endian\n");
}

/**
 * print_magic - print the number which indicates if the file is an ELF
 * @header: is the first line of ELF file
 * @arg: is the file's name
 *
 * Return: Always nothing
 */
void print_magic(unsigned char *header, char *arg)
{
	int i = 0;
	unsigned char magic_number[4] = {0x7f, 0x45, 0x4c, 0x46};


	for (i = 0; i < 4; i++)	/* ELF file check */
	{
		if (header[i] != magic_number[i])	/* Message to put */
		{
			dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", arg);
			exit(98);
		}
	}

	printf("ELF Header:\n");

	printf("  Magic:   ");

	for (i = 0; i < 16; i++)
		printf("%02x ", header[i]);

	printf("\n");

}

/**
 * fd_error_handling - if error, print error message and exit
 * @fd: to check
 * @arg: is the name's file
 *
 * Return: Always nothing
 */
void fd_error_handling(int fd, char *arg)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open %s\n", arg);
		exit(98);
	}
}
