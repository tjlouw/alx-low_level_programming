#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: pointer to file name
 * @text_content: pointer to content in file
 *
 * Return: 1 on success, -1 on failure.
 * -1 if filename is NULL,
 * Create empty file, if text_content is NULL.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t  f_written;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		f_written = write(fd, text_content, strlen(text_content));

		if (f_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
