#include "main.h"

/**
 * print_diagonal - draws diagonal lin on the terminal
 * @n: default value
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a = 0;

		while (a < n)
		{
			int b = 0;

			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
}
