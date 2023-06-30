#include "main.h"

/**
 * _strcpy - copies string pointed to to buffer pointed to
 * @dest: buffer to be pointed to
 * @src: string pointed to to be copied
 * Return: dest output
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
