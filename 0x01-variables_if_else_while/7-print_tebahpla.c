#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* variable holding letter z */
	char c = 'z';

	/* while loop: loops from z-a */
	while (c >= 'a')
	{
		/* decrements value from z-a */
		putchar(c);
		c--;
	}
	/* ends loop on newline */
	putchar('\n');
	return (0);
}
