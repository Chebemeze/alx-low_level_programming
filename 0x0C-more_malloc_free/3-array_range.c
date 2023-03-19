#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array ranging from min to max.
 * @min: minimum value.
 * @max: max value.
 * Return: returns the address to the caller function
 */

int *array_range(int min, int max)
{
	int *p, size, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min;
	size ++;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(p + i) = min;
		min++;
	}

	return (p);
}
