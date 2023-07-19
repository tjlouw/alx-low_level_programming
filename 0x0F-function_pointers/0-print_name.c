#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: the name to print
 * @f: the func pointer to use to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
