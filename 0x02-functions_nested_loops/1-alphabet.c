#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - creating a function
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	_putchar(c);
	c++;
	}
	_putchar('\n');
	/* call function */
	return;
}
