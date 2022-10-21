#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: where n iss the integer number to be inputed.
 *
 */

void print_line(int n)
{
	int i;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}

	else if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
