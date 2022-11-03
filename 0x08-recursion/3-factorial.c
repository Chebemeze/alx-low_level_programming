#include "main.h"

/**
 * factorial - prints the factorial of a number.
 * @n: the given number.
 * Return: returns the factorial of the number.
 */

int factorial(int n)
{
	int p;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		p = n * factorial(n - 1);
	}

	return (p);
}
