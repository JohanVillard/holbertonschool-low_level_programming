#ifndef MAIN_H
#define MAIN_H

/* -----------------LIBRARIES---------------- */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <errno.h>

/* -----------------STRUCTURES---------------- */
/**
 * struct abi_list - store correspondind ABI to value 7 of the header
 * @value: stored in 7th value of header
 * @abi: used by the elf file
 */
typedef struct abi_list
{
	int value;	/* Set in ELF header */
	char *abi;	/* Corresponding ABI */
} abi_list_t;

/**
 * struct elf_type - store the file's type
 * and his corresponding value gives by header
 * @value: stored in 10th value of header
 * @type: of the elf file
 * @description: of the type
 */
typedef struct elf_type
{
	int value;	/* Set in ELF header */
	char *type;	/* Corresponding type */
	char *description;	/* Corresponding description */
} elf_type_t;

/* -----------------FUNCTIONS---------------- */
int _putchar(char c);
/* P3T0 */
ssize_t read_textfile(const char *filename, size_t letters);
/* P3T1 */
int create_file(const char *filename, char *text_content);
/* P3T2 */
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
