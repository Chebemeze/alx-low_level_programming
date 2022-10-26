#include "main.h"

/**
 * puts2 - prints members of an array who are
 * muktiple of 2
 * @str: Array given.
 *
 */

void puts2(char *str)
{
	int j;

	j = 0;
	while (str[j])
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
		j++;
	}
	_putchar('\n');
}
