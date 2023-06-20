#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - func printing alphabet x10
 */
void print_alphabet_x10(void)
{
	char c;
	int d = 0;

	while (d < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
		_putchar(c);
		c++;
		}
		_putchar('\n');
		d++;
	}
}
