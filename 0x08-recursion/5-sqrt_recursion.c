#include "main.h"

/**
 * _sqrt - finds square root recursively
 * @n: given number of int value
 * @i: added variable
 *
 * Return: -1 if n does not have a natural sqrt
 */
int _sqrt(int n, int i) /* helper func */
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural squ    are root of a number
 * @n: given number of int value
 *
 * Return: -1 if n does not have a natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}
