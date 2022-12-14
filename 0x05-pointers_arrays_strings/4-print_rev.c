#include "main.h"

/**
 * print_rev - prints string in a reverse manner
 * when called by the main function
 * @s: the string given and to be printed.
 */

void print_rev(char *s)
{
	int j, i;

	i = 0;
	while (s[i])
	{
		i++;
	}

	for (j = i - 1; s[j]; j--)
	{
		_putchar((s[j]));
	}
	_putchar('\n');
}
