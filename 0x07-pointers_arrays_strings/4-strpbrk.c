#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string 1
 * @accept: string 2
 *
 * Return: pointer to byte in s that match accept, else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;
		while (*a != '\0')
		{
			if (*a == *s)
		{
			return (s);
		}
			++a;
		}
		++s;
	}
	return (NULL);
}
