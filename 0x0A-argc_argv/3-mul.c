#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - muitiplies two integers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success, otherwise 1
 */
int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
