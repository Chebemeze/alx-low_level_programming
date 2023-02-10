#include "main.h"

/**
 * _isupper - Checks if character inputed is uppercase.
 * @c: single letter character to be entered.
 * Return: returns 1 if it is an uppercase.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
