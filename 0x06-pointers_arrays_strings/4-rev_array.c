#include "main.h"

/**
 * reverse_array - reverses the content of an array with
 * respect to "n".
 * @a: array given.
 * @n: number of elements in the array
 *
 */

void reverse_array(int *a, int n)
{
	int i, bem;

	for (bem = n - 1; bem > (n / 2); bem--)
	{
		i = a[n - 1 - bem];
		a[n - 1 - bem] = a[bem];
		a[bem] = i;
	}
}
