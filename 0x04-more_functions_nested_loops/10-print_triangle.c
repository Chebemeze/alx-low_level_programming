#include "main.h"

/**
 * int i, j, - Prints triange using "#" character.
 *
 * @size:  this is the size of the triangle. a value
 * will be given
 *
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j >= (size - (i - 1)))
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}

	else if (size <= 0)
	{
		_putchar('\n');
	}
}
