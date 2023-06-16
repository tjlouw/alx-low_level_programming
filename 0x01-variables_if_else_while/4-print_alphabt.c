#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (SUccess)
 */
int main(void)
{
	/* variable holding lower case letter */
	int c = 'a';

	/* while loop: looping from a to z */
	while (c <= 'z')
	{
		/* if statement: stops while loop when args are met and continues loop */
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	/* ends loop with new line */
	putchar('\n');
	return (0);
}
