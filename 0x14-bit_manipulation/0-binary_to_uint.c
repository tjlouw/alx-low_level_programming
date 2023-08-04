#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary number to uint
 * @b: pointing to string of 0 and 1 chars
 *
 * Return: 0 is not b, 0 or 1
 * else return value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		num = 2 * num + (*b++ - '0');
	}
	return (num);
}
