#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @n: valued number
 *
 * Return: value of c
 */
int print_last_digit(int n)
{
	int c = n % 10;

	if (c < 0)
	{
		c = -c;

	}
	_putchar(c + '0');
	return (c);
}
