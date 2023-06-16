#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* variable holding value 0 */
	int c = 0;

	/* while loop: loops from 0-9 ends before 10 */
	while (c < 10)
	{
		/* + '0' - converts char to int */
		putchar(c + '0');
		c++;
	}
	/* ends loop with a newline */
	putchar('\n');
	return (0);
}
