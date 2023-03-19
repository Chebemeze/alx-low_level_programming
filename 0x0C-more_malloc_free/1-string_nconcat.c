#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings. The returned
 * pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated.
 * terminated. If the function fails it should return NULL.
 * If n is greater or equal to the length of s2 then use the
 * the etire string s2. if NULL is passed, treat it as an empty string.
 * @s1: the string to append to
 * @s2: second string given
 * @n: the number of s2 characters to append to s1.
 * Return: address of the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len, size, r;
	char *p;

	i = 0;
	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	j = 0;
	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}
	if (n >= j)
		len = j;
	else
		len = n;
	size = i + len;
	size++;
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	size--;

	for (r = 0; r < size; r++)
	{
		if (r < i)
		{
			*(p + r) = s1[r];
		}
		else if (j != 0)
		{
			*(p + r) = s2[r - i];
		}
		else
			break;
	}
	*(p + r) = '\0';
	return (p);
}
