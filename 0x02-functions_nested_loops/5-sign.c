#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n : number to check
 *
 * Return: 1 and prints + if n > 0, -1 if < 0, otherwise 0 and prints 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
