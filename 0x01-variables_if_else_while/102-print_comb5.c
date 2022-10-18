#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int m, i;

	for (m = 0; m < 99; m++)
	{
		for (i = 0; i <= 99; i++)
		{
			if (m != i && m < i)
			{
				putchar(m / 10 + 48);
				putchar(m % 10 + 48);
				putchar(' ');
				putchar(i / 10 + 48);
				putchar(i % 10 + 48);
				if (m != 98 || i != 99)
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
