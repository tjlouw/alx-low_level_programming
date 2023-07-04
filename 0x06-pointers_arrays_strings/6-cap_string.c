#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to print
 *
 * Return: returns char value
 */
char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	char separators[] = " \t\n,;.!?\"(){}";
	int capitalize = 1;

	while (str[i] != '\0')
	{
		if (capitalize == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		capitalize = 0;

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				capitalize = 1;
				break;
			}
		}
		i++;
	}
	return (str);
}
