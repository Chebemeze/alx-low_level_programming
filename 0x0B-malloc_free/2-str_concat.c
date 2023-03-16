#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string given.
 * @s2: second string given.
 * Return: pointer or null.
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i, m, n, j;

	i = 0;
	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++)
			;
	}
	m = 0;
	if (s2 != NULL)
	{
		for (m = 0; s2[m]; m++)
			;
	}

	n = i + m;
	n++;
	p = (char *) malloc(sizeof(char) * n);
	if (p == NULL)
		return (NULL);

	for (j = 0; j < n; j++)
	{
		if (j < i)
		{
			*(p + j) = s1[j];
		}
		else if (m != 0)
		{
			*(p + j) = s2[j - i];
		}
		else
			break;
	}
	*(p + j) = '\0';
	return (p);
}
