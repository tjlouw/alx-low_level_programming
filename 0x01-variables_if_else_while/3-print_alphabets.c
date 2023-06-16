#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	/* variables holding lower and upper case letters */
	char lower = 'a';
	char upper = 'A';

	/* while loop: looping from a-z for both lower and upper case */
	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	/* returns newline at the end of loop */
	putchar('\n');
	return (0);
}
