#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0) are not compared
 * @haystack: The string that will be searched
 * @needle: The string to search for.
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, p;

	p = 0;
	while (haystack[p])
	{
		p++;
	}

	for (i = 0; i < p; i++)
	{
		if (haystack[i] == needle[0])
		{
			return (&haystack[i]);
		}
	}

	return (0);
}
