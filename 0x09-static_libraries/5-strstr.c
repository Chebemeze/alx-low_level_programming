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
	unsigned int i, j, q, p, y;

	p = 0, q = 0;
	while (haystack[p])
	{
		p++;
	}
	while (needle[q])
	{
		q++;
	}

	for (i = 0; i < p; i++)
	{
		j = 0;
		y = i;
		while (haystack[i] && needle[j] && (haystack[i] == needle[j]))
		{
			j++;
			i++;
		}
		if ((j == q) && needle[j] == '\0')
		{
			return (&haystack[y]);
		}
		else if (haystack[i] && needle[j])
		{
			i = y;
		}
		else if (j >= 1 && j < q)
		{
			return (0);
		}
	}
	return (0);
}
