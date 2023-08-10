#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 *check_args - checks the number of arguments
 * @argc: number of arguments
 */
void check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, USAGE);
		exit(97);
	}
}

/**
 * open_files - opens the files
 * @argv: arguments vector
 * @file_from: Pointer to teh file descriptor
 * @file_to: Pointer to the file descriptor
 */
void open_files(char *argv[], int *file_from, int *file_to)
{
	mode_t mode, old_mask;

	*file_from = open(argv[1], O_RDONLY);
	if (*file_from == -1)
	{
		dprintf(STDERR_FILENO, READ_ERROR, argv[1]);
		exit(98);
	}

	/* set unmask to allow write permissions for group */
	old_mask = umask(0002);

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	*file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (*file_to == -1)
	{
		dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]);
		close(*file_from);
		exit(99);
	}
	/* restore the original umnask value */
	umask(old_mask);
}

/**
 * copy_file - copy the content of file_from to file_to
 * @argv: arguments vector
 * @file_from: file descriptor
 * @file_to: file descriptor
 */
void copy_file(char *argv[], int file_from, int file_to)
{
	int read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];

	while ((read_bytes = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(file_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
		{
			dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}

	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, READ_ERROR, argv[1]);
		close(file_from);
		close(file_to);
		exit(98);
	}
}
/**
 * close_files - closes the files
 * @file_from: file descriptor
 *@file_to: file descriptor
 */
void close_files(int file_from, int file_to)
{
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, CLOSE_ERROR, file_from);
		close(file_to);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, CLOSE_ERROR, file_to);
		exit(100);
	}
}

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Arguments vector
 *
 * Return: 0 on success, or exit with error code
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	check_args(argc);
	open_files(argv, &file_from, &file_to);
	copy_file(argv, file_from, file_to);
	close_files(file_from, file_to);
	return (0);
}
