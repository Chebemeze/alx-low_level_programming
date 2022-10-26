#include "main.h"

/**
 * print_array - prints members of an array,
 * separated by comma, and followed by a new line
 * @a: Name of array given
 * @n: Number of elements of the array to be
 * printed.
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (j > 0)
		{
			printf(",");
		}
		printf("%d", a[j]);
	}
	printf("\n");
}
