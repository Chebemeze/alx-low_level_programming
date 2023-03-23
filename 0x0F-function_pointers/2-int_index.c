#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array:  pointer to the array.
 * @size: size of the array.
 * @cmp: a pointer to a function.
 * Return: returns index of the first match of the array if found else
 * it returns -1 if size is equal to or lesser than 0 or if no match
 * is found.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
