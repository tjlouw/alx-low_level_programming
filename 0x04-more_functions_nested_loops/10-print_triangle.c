#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: default value
 */
void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		a = 1;

		while (a <= size)
		{
			b = size - a;

			while (b > 0)
			{
				_putchar(' ');
				b--;
			}
			b = a;
			while (b > 0)
			{
				_putchar('#');
				b--;
			}
			_putchar('\n');
			a++;
		}
	}
}
