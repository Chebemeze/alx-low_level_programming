#include "main.h"

/**
 * print_diagonal - Draws diagonal line on the terminal.
 * @n: integer to be inputed by user.
 *
 */

void print_diagonal(int n)
{
	int i, j;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			i = j;
			for (j = 0; j >= 0; j--)
			{
				if (j == 0)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
