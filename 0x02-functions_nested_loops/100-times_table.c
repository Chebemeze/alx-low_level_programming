#include "main.h"

/**
 * print_times_table - prints n times table.
 * @n: the integer given.
 */

void print_times_table(int n)
{
	int i, j, mult;

	if (n >= 0 && n <= 15)
	{

		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				mult = i * j;

				_putchar(',');
				_putchar(' ');
				if (mult <= 9)
				{
					_putchar(' ');
				}
				if (mult <= 99)
				{
					_putchar(' ');
				}

				if (mult >= 10 && mult <= 99)
				{
					_putchar((mult / 10) + '0');
				}

				else if (mult >= 100 && mult <= 999)
				{
					_putchar((mult / 100) + '0');
					_putchar((mult / 10) % 10 + '0');
				}

				_putchar((mult % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
