#include "main.h"

/**
 * print_square - prints square, followed by new line
 * @size: size of square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a = 0;

		while (a < size)
		{
			int b = 0;

			while (b < size)
			{
				_putchar('#');
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}
