#include "main.h"

/**
 * _strlen_recursion - prints length of a astring
 * @s: pointer sting value
 *
 * Return: 0 if condition is met, else returns length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
