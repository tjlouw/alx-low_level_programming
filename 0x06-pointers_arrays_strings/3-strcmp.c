#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: set values
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a])
	{
		if (s1[a] == '\0')
		{
			return (0);
		}
		a++;
	}
	return (s1[a] - s2[a]);
}
