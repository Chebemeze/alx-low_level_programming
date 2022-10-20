#include "main.h"
/**
 * times_table - prints 9 times table.
 *
 */

void times_table(void)
{
	int i, j, timx;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			timx = i * j;
			if (timx <= 9)
			{
				_putchar(' ');
			}

			else
			{
				_putchar((timx / 10) + '0');
			}

			_putchar((timx % 10) + '0');
		}

		_putchar('\n');
	}
}
