#ifndef MAIN_H
#define MAIN_H

/* Header files */
#include <stddef.h>
#include <stdlib.h>

/* Macros */
#define BUFFER_SIZE 1024
#define USAGE "Usage: cp file_from file_to\n"
#define READ_ERROR "Error: Can't read from file%s\n"
#define WRITE_ERROR "Error: Can't write to %s\n"
#define CLOSE_ERROR "Error: Can't close fd %d\n"

/* Function prototypes */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
