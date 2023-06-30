#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: destination variable
 * @src: source variable
 * @n: array element in bytes
 * Return: output stored in dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
