#include "main.h"

/**
 * swap_int - swaps the values of variables a, b
 * @a: value stored at a
 * @b: value stored at b
 */
void swap_int(int *a, int *b)
{
	int i = *a; /* temporarily stores value in a to i */
	*a = *b; /* swaps values at a for b */
	*b = i; /* takes value of a stored in i and stores it to b */
}
