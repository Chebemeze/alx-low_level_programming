#include "main.h"

/**
 * _puts - prints string in a reverse manner
 * when called by the main function
 * @str: the string given and to be printed.
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
