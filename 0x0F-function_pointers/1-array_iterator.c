#include "function_pointers.h"

/**
 * array_itereator - executes function given as a parameter on each element of array
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
