#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success, otherwise 1 if value not digit
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *c;

	for (i = 1; i < argc; i++)
	{
		for (c = argv[i]; *c; c++)
		{
			if (!isdigit(*c))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
