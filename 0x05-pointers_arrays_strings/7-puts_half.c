#include "main.h"

/**
 * puts_half - prints the other half of string given
 * @str: the string givien
 *
 */

void puts_half(char *str)
{
	int k, l;

	while (str[k])
	{
		k++;
	}
	k--;
	l = k / 2;
	k = 0;
	while (str[k])
	{
		if (k > l)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
