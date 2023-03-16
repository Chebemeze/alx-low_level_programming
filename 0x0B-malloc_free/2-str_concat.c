#include "main.h"
#include <stdlib.h>

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

	if (s1 == NULL && s2 == NULL)
		return ('\0');
	else if (s1 == NULL && s2 != NULL)
		return (s2);
	else if (s2 == NULL && s1 != NULL)
		return (s1);
	for (i = 0; s1[i]; i++)
	{
	}
	for (m = 0; s2[m]; m++)
	{
	}

	n = i + m;
	n++;
	p = (char *) malloc(sizeof(char) * n);
	if (p == NULL)
	{
		return (0);
	}
	for (j = 0; j < n; j++)
	{
		if (j < i)
		{
			*(p + j) = s1[j];
		}
		else
		{
			*(p + j) = s2[j - i];
		}
	}
	*(p + j) = '\0';
	return (p);
}
