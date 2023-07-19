#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - choose teh correct functio to perform the operation
 * @s: first parameter
 *
 * Return: NULL if function fails
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*s == *ops[i].op)
		{
			return (*(ops[i].f));
		}
		i++;
	}
	return (NULL);
}
