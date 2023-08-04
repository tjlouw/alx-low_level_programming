#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns number of bits needed to flip,
 * to get from one number to another
 * @n: value of bit
 * @m: given value
 *
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
