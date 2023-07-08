#include "main.h"

/**
 * _prime - help func checks if n is prime number
 * @n: given value
 * @i: added variable
 *
 * Return: 1 if int is prime, otherwise 0
 */
int _prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (_prime(n, i + 1));
}

/**
 * is_prime_number - returns prime numbers with exceptions
 * @n: given value
 *
 * Return: 1 if int is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime(n, 2));
}
