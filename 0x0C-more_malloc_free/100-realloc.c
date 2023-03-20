#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: address of the preious pointer
 * @old_size: old size of the memory.
 * @new_size: newly alolocated size.
 * Return: returns address of the re-allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newb;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		newb = malloc(new_size);
		if (newb == NULL)
			return (NULL);

		return (newb);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		newb = ptr;
		newb = malloc(new_size);
		free(ptr);
	}
	return (newb);
}
