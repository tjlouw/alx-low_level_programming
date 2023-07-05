#include <stddef.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: first occurence of substring
 * @needle: string value
 *
 * Return: pointer to the beginning of located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *b = haystack;
		char *p = needle;

		while (*haystack && *p && *haystack == *p)
		{
			haystack++;
			p++;
		}
		if (!*p)
		{
			return (b);
		}
		haystack = b + 1;
	}
	return (NULL);
}
