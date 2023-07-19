#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - executes the operator given
 * @argc: first parameter
 * @argv: second parameter
 *
 * Return: Always zero (success), else error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = get_op_func(operator)(num1, num2);
	printf("%d\n", result);

	return (0);
}
