#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to bit value
 * @index: given index
 *
 * Return: 1 success
 * else, -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}

	*n = *n & ~(1UL << index);
	return (1);
}
