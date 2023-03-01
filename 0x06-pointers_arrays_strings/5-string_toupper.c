#include "main.h"

/**
 * string_toupper - changes an aray from lowercase o uppercase
 * @e: pointer
 * Return: returns the uppercase string.
 *
 *
 */

char *string_toupper(char *e)
{
	int i = 0;

	for (i = 0; e[i] != '\0'; i++)
	{
		if (e[i] >= 'a' && e[i] <= 'z')
		{
			e[i] = e[i] - 32;
		}
	}

	return (e);
}
