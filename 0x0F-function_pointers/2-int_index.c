#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to search
 * @size: size of array
 * @cmp: function used to compare values
 *
 * Return: -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
