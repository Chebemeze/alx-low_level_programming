#include "main.h"

/**
 * print_times_table - prints times table of integer inputed.
 *
 * @n: the integer to be inputed.
 */

void print_times_table(int n)
{
	int j, mul;


	if (n < 15 || n >= 0)
	{
		for (n = 0; n < (n + 1); n++)
		{
			_putchar('0');
			for (j = 1; j < n; j++)
			{
				mul = n * j;
				_putchar(',');
				_putchar(' ');
				if (mul <= n)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((mul / 10) + '0');
				}
				_putchar((mul % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
