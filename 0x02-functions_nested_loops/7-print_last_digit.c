#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @a: the integer number to be inputed.
 * Return: returns the value of the last digit
 */

int print_last_digit(int a)
{
	if ((a % 10) < 0)
	{
		_putchar(((a % 10) * -1) + '0');
		return ((a % 10) * -1);
	}
	_putchar((a % 10) + '0');
	return (a % 10);
}
