#include "main.h"

/**
 * _strncpy - copies the source string(src) into the destination
 * string(dest) with the heslp of the "n" value given
 * if the n value is greater than the length of thesrc string then
 * fill the remaining space with null bytes.
 * @dest: first string given
 * @src: string to be copied
 * @n: integer number of bytes given.
 * Return: the new value of dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];

	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
