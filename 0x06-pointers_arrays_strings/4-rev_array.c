#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array of int
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int l = 0;
	int m = n - 1;

	while (l < m)
	{
		int temp = a[l];
		a[l] = a[m];
		a[m] = temp;
		l++;
		m--;
	}
}
