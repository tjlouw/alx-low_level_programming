#include "main.h"

/**
 * rev_string - reverses a string
 * @s: stored string value
 */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char i;

	while (s[b + 1])
	{
		b++;
	}
	while (a < b)
	{
		i = s[a];
		s[a] = s[b];
		s[b] = i;
		a++;
		b--;
	}
}
