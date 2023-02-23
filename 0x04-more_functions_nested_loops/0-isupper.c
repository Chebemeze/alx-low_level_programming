#include "main.h"

/**
 * _isupper - checks for upper case character
 * @c: The character given
 * Return: returns 1 if it is an uppercase but 0 if it not
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
