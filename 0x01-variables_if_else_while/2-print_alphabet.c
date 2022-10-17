#include <stdio.h>

/**
 * main - A program that prints alphabet in lowercase followed
 *		by a new line.
 * Return: Always 0.
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
