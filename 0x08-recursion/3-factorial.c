#include "main.h"

/**
 * factorial - prints factorial of given number
 * @n: given number
 *
 * Return: -1 if lower than 0, otherwise 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial (n - 1));
}
