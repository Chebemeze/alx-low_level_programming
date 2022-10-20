#include "main.h"

/**
 * _isdigit - Checks a character if it is a digit.
 * @c: character to be inputed.
 * Return: 1 if it is a digit and 0 if it is not.
 *
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
