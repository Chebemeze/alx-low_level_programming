#include "main.h"
/**
 * _abs - prints the absolute value of integer "c"
 * @c: the integer to be inputed
 * Return: returns the absolute value of the inputed integer
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	return (c);
}
