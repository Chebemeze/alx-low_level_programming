#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers from 1 - 100. if numbers are multiples
 * of 3, replace them with "Fizz", multiples of 5 replace with
 * "Buzz" while if a number is a multiple of 5 and 3 print "FizzBuzz".
 * Return: 0 if successful.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i == 100)
		{
			continue;
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
