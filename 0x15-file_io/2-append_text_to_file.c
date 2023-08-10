#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_test_to_file -
 * @filename:
 * @text_content:
 *
 * Return:
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t f_written;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		f_written = write(fd, text_content, strlen(text_content));
		if (f_written == -1)
		{
			return (-1);
		}
	}

	close(fd);
	return (1);
}
