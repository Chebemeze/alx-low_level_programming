#include "main.h"
#include<stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: size of array.
 * Return: pointer or null.
 */

char *_strdup(char *str)
{
	char *p;

	unsigned int i, j;

	if (str == NULL)
	{
		return (0);
	}
	i = 0;
	while (str[i])
	{
		i++;
	}
	p = (char *) malloc(sizeof(char) * i);
	if (p == NULL)
	{
		return (0);
	}
	for (j = 0; j < i; j++)
	{
		*(p + j) = str[j];
	}
	*(p + j) = '\0';

	return (p);

}
