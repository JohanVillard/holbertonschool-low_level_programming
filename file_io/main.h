#ifndef MAIN_H
#define MAIN_H

/* -----------------LIBRARY---------------- */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

/* -----------------FUNCTIONS---------------- */
int _putchar(char c);
/* P3T0 */
ssize_t read_textfile(const char *filename, size_t letters);
/* P3T1 */
int create_file(const char *filename, char *text_content);
/* P3T2 */
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
