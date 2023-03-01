#include "main.h"

/**
 * _strncat - Concatenates two string but does so
 * with respect to "n" provided.
 * @dest: first string
 * @src: second string to append
 * @n: number to stop appending.
 * Return: address of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
	{
		i++;
	}

	for (j = 0; j < n && src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (&dest[0]);
}

