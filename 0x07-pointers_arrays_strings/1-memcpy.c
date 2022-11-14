#include "main.h"

/**
 * _memcpy - copies memory area from src to dest.
 * @dest: destination where bytes are copied to.
 * @src:  area where bytes are copied from.
 * @n: number of bytes to copy.
 * Return: returns the new value of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (&dest[0]);
}
