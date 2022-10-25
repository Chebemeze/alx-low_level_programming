#include  "main.h"

/**
 * _strlen - calculates the lengrh of a string.
 * @s: string given to be measured.
 * Return: returns the length i.e i of the
 * string.
 */

int _strlen(char *s)
{
	int j;

	j = 0;
	while (s[j])
	{
		j++;
	}

	return (j);
}
