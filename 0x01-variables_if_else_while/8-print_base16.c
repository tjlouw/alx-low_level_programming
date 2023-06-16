#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;

	/* while loop: loops as long as value is less than 16 */
	while (c < 16)
	{
		/* returns values 0-9 */
		if (c < 10)
		{
			/* + '0' - converts vhar to int */
			putchar(c + '0');
		}
		/* prints a-z after 10 and below 16 characters */
		else
		{
			putchar(c - 10 + 'a');
		}
	c++;
	}
	/* ends loop with newline */
	putchar('\n');
	return (0);
}
