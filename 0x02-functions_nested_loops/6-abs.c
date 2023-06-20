#include <stdio.h>
#include "main.h"

/**
 * _abs - computes absolute value of integer
 * @c: value arg
 *
 * Return: absolute value
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	else
	{
		return (c);
	}
}
