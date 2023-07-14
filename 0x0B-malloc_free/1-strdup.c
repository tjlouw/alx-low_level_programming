#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to nwely allocated space in memory
 * @str: initial pointer
 *
 * Return: NULL if str = NULL, or pointer to duplicate string, or NULL
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[len] = '\0';
	return (dup);

}
