#include "main.h"

/**
 * is_prime_number - Determines if the integer entered by
 * a user is a prime number.
 * @n: the number given.
 * Return: the squareroot of n, if "1" is returned by
 * the _sqrt() then it is a prime
 * number but if "0" then it is an even number.
 */

int is_prime_number(int n)
{
	if (n < 0 || n == 1)
	{
		return (0);
	}
	else
	{
		return (_sqrt(0, n));
	}
}


/**
 * _sqrt - returns the square root of a number when given
 * two arguments.
 * @i: the test number given.
 * @j: the squared number given.
 * Return: returns the square root, i.
 */


int _sqrt(int i, int j)
{
	if (i > j / 2)
	{
		return (1);
	}
	else if (i * i == j)
	{
		return (0);
	}
	else
	{
		return (_sqrt(i + 1, j));
	}
}
