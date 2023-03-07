#include "main.h"
#include <string.h>

/**
 * _strpbrk - locates the first occurrence in the string s of any
 * of the bytes in the string accept
 * @s: The string that will be searched
 * @accept: The string to search for.
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < strlen(accept); j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (s[i] == accept[j])
		{
			break;
		}
	}
	if (s[i] == accept[j])
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}

	return (&s[i]);
}
