#include "main.h"

/**
 * _puts - prints string when called by the main
 * function
 * @str: the string given and to be printed.
 */

void _puts(char *str)
{
	int j;

	for (j = 0; str[j]; j++)
	{
		_putchar((str[j]));
	}
	_putchar('\n');
}
