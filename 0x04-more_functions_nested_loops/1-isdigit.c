#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: iteger to test for
 * Return: returns 1 if it is an uppercase but 0 if it not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
