#include "main.h"

/**
 * _isalpha - Checks for alphabet character
 * @c: the character to check
 * Return: returns 1 if is is a letter( lowercase or uppercase).
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
