#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string pointer 1
 * @s2:string pointer 2
 *
 * Return: empty str if variable return NULL, otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *dup;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;

	dup = malloc(sizeof(char) * (i + j + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		dup[i] = s1[i];
	}
	for (j = 0; s2[j]; j++)
	{
		dup[i + j] = s2[j];
	}
	dup[i + j] = '\0';
	return (dup);
}
