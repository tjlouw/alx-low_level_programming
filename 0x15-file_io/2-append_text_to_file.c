#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text to end of a file
 * @filename: pointer to the name of teh file
 * @text_content: Null terminated string to add at the end of file
 *
 * Return: 1 on success and -1 on failure
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
