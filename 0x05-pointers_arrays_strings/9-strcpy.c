#include "main.h"

/**
 * _strcpy -
 * @dest: buffer to be pointed to
 * @src: string pointed to to be copied
 * Return: Always 0 (success)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
