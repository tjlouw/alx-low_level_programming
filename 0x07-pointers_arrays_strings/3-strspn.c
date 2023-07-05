#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: consists bytes
 *
 * Return: number of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int count = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			return (count);
		}
		i++;
	}
	return (count);
}
