#include "main.h"

/**
 * _strlen - returns length of string
 * @s: char variable storing string
 * Return: value of i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
