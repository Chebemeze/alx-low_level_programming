#include "main.h"

/**
 * main - checks "_isalpha(int c)" function if it works
 *
 * Return: returns 0 if successful.
 */

int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}
