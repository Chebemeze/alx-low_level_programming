#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial string given
 * @accept: the string containing the characters to match
 * Return: returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, p;

	p = 0;
	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < strlen(accept); j++)
		{
			if (s[i] == accept[j])
			{
				p++;
			}
		}
		if (s[i] == ',' || s[i] == ' ')
		{
			break;
		}
	}

	return (p);
}
