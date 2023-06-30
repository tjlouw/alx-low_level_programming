#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: stored string
 */
void puts_half(char *str)
{
	int len = 0;
	int a;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		a = len / 2;
		while (str[a] != '\0')
		{
			_putchar(str[a]);
			a++;
		}
	}
	else
	{
		a = (len - 1) / 2 + 1;
		while (str[a] != '\0')
		{
			_putchar(str[a]);
			a++;
		}
	}
	_putchar('\n');
}
