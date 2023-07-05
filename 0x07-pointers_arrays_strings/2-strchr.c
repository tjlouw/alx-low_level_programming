#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string value
 * @c: pointer to first occurence of character c in s
 *
 * Return: pointer of first occurence of char c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
