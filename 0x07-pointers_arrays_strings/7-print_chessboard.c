#include "main.h"

/**
 * print_chessboard - print chess
 * @a:pointer to the matrix
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j, k;

	k = sizeof(a) / sizeof(a[0][0]);
	i = 0;
	while (k > 0)
	{
		j = 0;
		while (a[i][j])
		{
			if ((void *)(a + i + 1) == (void *)(&a[i][j]))
			{
				break;
			}
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
		k--;
	}
}
