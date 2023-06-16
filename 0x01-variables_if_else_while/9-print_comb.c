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

	/* while loop: loops as long as less than 10 */
	while (c < 10)
	{
		/* + '0' - converts char to int */
		putchar(c + '0');

		/* adds ', ' comma, space if treu */
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		/* increments c+1 */
		c++;
	}
	/* ends loop with new line */
	putchar('\n');
	return (0);
}
