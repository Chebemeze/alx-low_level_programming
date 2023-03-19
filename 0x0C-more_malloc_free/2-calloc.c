#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an raay
 * @nmemb: number of elements in array.
 * @zize: size of the array.
 * Return: returns the address of the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	p = calloc(nmemb, size);

	return (p);
}
