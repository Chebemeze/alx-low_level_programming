#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed
 * to by "s" with the constant byte "b".
 * @s: a pointer, pointing to another variable
 * @b: constant byte b.
 * @n: number of bytes to be filled
 * Return: returns the new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	while (n)
	{
		i = n - 1;
		s[i] = b;

		n--;
	}

	return (&s[0]);
}
