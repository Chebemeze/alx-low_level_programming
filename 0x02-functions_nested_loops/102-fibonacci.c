#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbrs
 * Return: Return 0 if successsful
 */

int main(void)
{
	int i;
	unsigned long j = 1, increase_num  = 2, k;

	for (i = 0; i < 50; i++)
	{
		if (i < 49)
		{
			printf("%lu, ", j);
		}
		else
		{
			printf("%lu", j);
		}
		k = j;
		j = increase_num;
		increase_num = j + k;
	}
	printf("\n");

	return (0);
}
