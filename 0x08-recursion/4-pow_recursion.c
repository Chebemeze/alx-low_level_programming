#include "main.h"

/**
 * _pow_recursion - prints the value of "x" raise to power of "y".
 * @x: first integer number given.
 * @y: second integer number given.
 * Return: the final value(answer).
 */

int _pow_recursion(int x, int y)
{
	int p;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		p = x * _pow_recursion(x, (y - 1));
	}

	return (p);
}
