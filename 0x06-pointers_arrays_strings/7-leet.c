#include "main.h"

/**
 * leet - encodes a string
 * @str: value stored
 *
 * Return: str output value
 */
char *leet(char *str)
{
	int i;
	int j;
	char leet[] = "43071";
	char letters[] = "aAeEoOtTlL";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet[j / 2];
				break;
			}
		}
	}
	return (str);
}
