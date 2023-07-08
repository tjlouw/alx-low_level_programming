#include "main.h"

/**
 * _pow_recursion - returns value of x raised by pow y
 * @x: main value
 * @y: raised by power value
 *
 * Return: -1 if y less than 0, else 1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
