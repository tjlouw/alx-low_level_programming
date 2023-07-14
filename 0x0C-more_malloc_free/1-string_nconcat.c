#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculate and displays legnth of string
 * @str: string variable
 *
 * Return: string length
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - concatenates two string
 * @s1: first string
 * @s2: second string
 * @n: n bytes
 *
 * Return: NULL if failed, if NULL return empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	int len, num, i, j;
	num = n;


	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (num < 0)
	{
		return (NULL);
	}
	if (num >= _strlen(s2))
	{
		num = _strlen(s2);
	}

	len = _strlen(s1) + num + 1;
	new_str = malloc(sizeof(*new_str) * len);

	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; j < num; j++)
	{
		new_str[i + j] = s2[j];
	}
	new_str[i + j] = '\0';
	return (new_str);
}
