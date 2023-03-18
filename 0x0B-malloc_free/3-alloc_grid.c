#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the width of the array to be created
 * @height: heightof the array to be created.
 * Return: returns a pointer to pointer to the address of the matrix created.
 */

int **alloc_grid(int width, int height)
{
	int **mem_array, j, i;

	if (width == 0 || height == 0 || width < 0 || height < 0)
		return (NULL);

	mem_array = (int **)malloc(sizeof(int *) * height);

	if (mem_array == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		mem_array[j] = (int *)malloc(sizeof(int) * width);
		for (i = 0; i < width; i++)
		{
			mem_array[j][i] = 0;
		}
	}

	return (mem_array);
}
