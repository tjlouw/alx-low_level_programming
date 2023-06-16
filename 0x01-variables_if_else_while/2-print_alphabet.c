#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* variable c holds lower case a letter */
	char c = 'a';

	/* while loop: loops in increments from a-z */
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	/* enters newline at the end of loop */
	putchar('\n');
	return (0);
}
