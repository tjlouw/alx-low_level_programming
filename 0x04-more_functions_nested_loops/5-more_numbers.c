#include "main.h"

/**
 * more_numbers - prints 10 lines of 0-14
 */
void more_numbers(void)
{
	int a = 0;
	int b = 0;

	while (a < 10)
	{
		b = 0;
		while (b <= 14)
		{
			if (b >= 10)
			{
				_putchar(b / 10 + '0');
			}
			_putchar(b % 10 + '0');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
