#include <stdio.h>
#include "main.h"

/**
 * times_table - prints 9 times table starting from 0
 *
 * Return: void
 */
void times_table(void)
{
	int c = 0;
	int d;

	while (c <= 9)
	{
		d = 0;
		while (d <= 9)
		{
			if (c * d <= 9)
			{
				_putchar(c * d + '0');
			}
			else
			{
				_putchar(c * d / 10 + '0');
				_putchar(c * d % 10 + '0');
			}
			if (d != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			d++;
		}
		_putchar('\n');
		c++;
	}

}
