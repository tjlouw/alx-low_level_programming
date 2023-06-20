#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	/**
	 * While loop - loops through each char in c
	 * through the array value of i
	 * i is incremented until c has been printed
	 */
	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	/* outputs a newline at the end of loop */
	_putchar('\n');
	return (0);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
