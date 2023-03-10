#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character "c" in a string
 * @s: the string given.
 * @c: the character to look for.
 * Return: returns the chracter according to the conditions
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while ((s[i] != c) && (s[i] != '\0'))
	{
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
}
