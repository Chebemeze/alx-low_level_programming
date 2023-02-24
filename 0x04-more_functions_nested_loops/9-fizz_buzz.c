#include "main.h"
#include <stdio.h>

/**
 * main - Fizz-Buzz test, prints FizzBuzz for multiple of 5 and 3,
 * Fizz for multiple of 3 and Buzz for multiple of 5.
 * Return: returns 0 if sucessful.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 5) == 0) && ((i % 3) == 0))
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
