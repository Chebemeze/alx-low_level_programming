#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number given in the question.
 * Return: the squareroot of n, which will lead to the natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt(0, n));
	}
}


/**
 * _sqrt - returns the square root of a number when given two arguments.
 * @i: the test number given.
 * @j: the squared number given.
 * Return: returns the square root, i.
 */


int _sqrt(int i, int j)
{
	if (i > j / 2)
	{
		return (-1);
	}
	else if (i * i == j)
	{
		return (i);
	}
	else
	{
		return (_sqrt(i + 1, j));
	}
}
