#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: the size of memory to allocate.
 * Return: a pointer to the caller function
 */

void *malloc_checked(unsigned int b)
{
	void *result = malloc(b);

	if (result == NULL)
		exit(98);

	return (result);
}
