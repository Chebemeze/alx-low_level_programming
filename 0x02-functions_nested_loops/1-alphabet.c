#include "main.h"
/**
 * print_alphabet - prints alphabet in lower case, followed
 * by a new line.
 *
 * _putchar: prints a new line.
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
