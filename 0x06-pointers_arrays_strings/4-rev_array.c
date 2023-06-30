#include "main.h"

/**
 * reverse_array - reverses the content
 * @a: an array of integers
 * @n: number of elements of array
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
