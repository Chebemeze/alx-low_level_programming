#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0.
 */

int main(void)
{
	int k, f;

	for (k = 48; k <= 57; k++)
	{
		for (f = 48; f <= 57; f++)
		{
			if (k != f && k < f)
			{
				putchar(k);
				putchar(f);
				if (f != 57 || k != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
