#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to bit value
 * @index: given index
 *
 * Return: 1 success
 * -1 i fan error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
