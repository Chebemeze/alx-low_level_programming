#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in
 * lowercase, followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
