#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to return
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int division_num, p,  j;

	division_num = 1;
	if (n < 0)
	{
		j = -n;
		_putchar('-');
		p = j;
	}
	else
	{
		j = n;
		p = j;
	}

	while (j >= 10)
	{
		division_num = division_num * 10;
		j = j / 10;
	}
	while (division_num > 0)
	{
		_putchar(((p / division_num) % 10) + '0');
		division_num = division_num / 10;
	}
}
