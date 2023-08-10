#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads text file and prints it to POSIX stdout
 * @filename: pointer to file
 * @letters: text found in file
 *
 * Return: 0 if filename NULL,
 * 0 if file cann't be opened or read,
 * and 0 if write fails or doesn't write total amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	int f_read;
	int f_written;

	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		return (0);
	}

	f_read = read(fd, buffer, letters);
	if (f_read == -1)
	{
		return (0);
	}

	f_written = write(STDOUT_FILENO, buffer, f_read);
	if (f_written == -1 || f_written != f_read)
	{
		return (0);
	}

	free(buffer);
	close(fd);

	return (f_written);
}
