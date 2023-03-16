#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char
 * Return: pointer or null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *p;

	if (size == 0)
	{
		return (0);
	}
	p = (char *) malloc(sizeof(c) * size);
	if (p == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}
	return (p);
}
