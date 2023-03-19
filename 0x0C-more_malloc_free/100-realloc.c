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
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else
		ptr = malloc(new_size);
	return (ptr);
}
