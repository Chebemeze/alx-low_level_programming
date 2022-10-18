#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0.
 */

int main(void)
{
	int k, f, j;

	for (k = 48; k <= 57; k++)
	{
		for (f = 48; f <= 57; f++)
		{
			for (j = 48; j <= 57; j++)
			{
				if (k != f && k < f)
				{
					putchar(k);
					putchar(f);
					putchar(j);
					if (k != 55 || f != 56 || j != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
