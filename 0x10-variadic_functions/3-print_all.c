#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *s, *sep = "";
	int i = 0;

	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == 'c')
		{
			printf("%s%c", sep, va_arg(ap, int));
			sep = ", ";
		}
		else if (format[i] == 'i')
		{
			printf("%s%d", sep, va_arg(ap, int));
			sep = ", ";
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", sep, va_arg(ap, double));
			sep = ", ";
		}
		else if (format[i] == 's')
		{
			s = va_arg(ap, char*);
			if (s == NULL)
			{
				s = "(nil)";
			}
			printf("%s%s", sep, s);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
