#include "main.h"

/**
 * main - checks "_islower(int c)" funtion if it is
 *	correct.
 *  Return- Always 0.
 */

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
