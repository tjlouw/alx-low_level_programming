#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - returns the sum of two values
 * @a: 1st int value
 * @b: 2nd int value
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	int add;

	add = a + b;

	return (add);
}

/**
 * op_sub - subtracts two values
 * @a: 1st value
 * @b: 2nd value
 *
 * Return: subtracts b from a
 */
int op_sub(int a, int b)
{
	int sub;

	sub = a - b;

	return (sub);
}

/**
 * op_mul - multiplies two values
 * @a: 1st int value
 * @b: 2nd int value
 *
 * Return: the multiplication
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;

	return (mul);
}

/**
 * op_div - divides two values
 * @a: 1st int value
 * @b: 2nd int value
 *
 * Return: the division
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;

	return (div);
}

/**
 * op_mod - returns the modulo operation of two values
 * @a: 1st int value
 * @b: 2nd int value
 *
 * Return: the modulo
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;

	return (mod);
}
