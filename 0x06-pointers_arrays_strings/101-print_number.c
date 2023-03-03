#include "main.h"

/**
 * print_number - prints a number withouth the use of array or pointers
 * @n: the number to be printed
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int division_num, j;

	division_num = 1;
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
		j = n;
	}
	else if (n >= 0)
	{
		j = n;
	}

	while (j >= 10)
	{
		division_num = division_num * 10;
		j = j / 10;
	}
	while (division_num > 0)
	{
		_putchar(((n / division_num) % 10) + '0');
		division_num = division_num / 10;
	}
}
