#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;

	/* while loop: loops from 0-9 and stops before 10 */
	while (c < 10)
	{
		printf("%d", c);
		c++;
	}
	/* ends loop with a new line */
	printf("\n");
	return (0);
}
