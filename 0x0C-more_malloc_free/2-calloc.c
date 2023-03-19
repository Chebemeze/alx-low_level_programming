#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an raay
 * @nmemb: number of elements in array.
 * @size: size of the array.
 * Return: returns the address of the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = calloc(nmemb, size);
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
