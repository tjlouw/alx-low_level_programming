#include "main.h"

/**
 * _mempcy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: coppies n bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
