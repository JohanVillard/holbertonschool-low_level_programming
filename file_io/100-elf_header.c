#include "main.h"

int main(int argc, char **argv)
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
	int o_fd = 0, r_fd = 0, i = 0, j = 0, flag = 0;
	int total_bytes_address = 0, max_offset_entry_point = 0;
	unsigned char header[51];
	unsigned char magic_number[4] = {0x7f, 0x45, 0x4c, 0x46};
	int entry_point[5];

	if (argc != 2)	/* Argument's number check */
		return (-1);	/* Message to put */

	o_fd = open(argv[1], O_RDONLY);	/* Open the second argument */
	if (o_fd == -1)
		return (-1);	/* Message to put */

	r_fd = read(o_fd, header, 51);	/* Read the header of ELF file: 16 bytes */
	if (r_fd == -1)
		return (-1);	/* Message to put */

	for (i = 0; i < 4; i++)	/* ELF file check */
	{
		if (header[i] != magic_number[i])
		{
			printf("%s is not an ELF file\n", argv[1]);
			return (-1);	/* Message to put */
		}
	}

	printf("ELF Header:\n");

	printf("  Magic:    ");

	for (i = 0; i < 16; i++)
	{
		printf("%02x ", header[i]);
	}

	printf("\n");

	if (header[4] == 2)	/* 32 or 64 bit format */
		printf("  Class:				     ELF64\n");
	else
		printf("  Class:				     ELF32\n");

	/* 2's complement: Notation to represent signed integers */
	/* Endianness */
	if (header[5] == 2)
		printf("  Data:				     2's complement, big endian\n");
	else
		printf("  Data:				     2's complement, little endian\n");

	if (header[6] == 1)	/* 99,99% of time it is set to 1 */
		printf("  Version:			     1 (current)\n");
	else
		printf("  Version:			     0 (invalid)\n");


	i = 0; /* Reset incrementation */
	while (abi_sheet[i].abi != NULL)
	{
		if (header[7] == abi_sheet[i].value)
			printf("  OS/ABI:			     %s\n", abi_sheet[i].abi);
		i++;
	}

	printf("  ABI Version:			     %d\n", header[8]);

	i = 0; /* Reset incrementation */
	while (elf_type_sheet[i].type != NULL)
	{
		if (header[16] == elf_type_sheet[i].value)
			printf("  Type:				     %s %s\n", elf_type_sheet[i].type, elf_type_sheet[i].description);
		i++;
	}

	printf("  Entry point address:		     0x");

	if (header[4] == 1)	/* 32 bit format */
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
		if (entry_point[i] != 0)
		{
			printf("%02x", entry_point[i]);
			flag = 1;
		}
		else if (flag == 1)
			printf("%02x", entry_point[i]);
	}

	printf("\n");

	return (0);
}
