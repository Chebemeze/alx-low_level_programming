#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - checks the code. Adds positive numbers.
 * @argc: This the total count of arguments.
 * @argv: This is a pointer pointing to the array of
 * arguments when the code is executed.
 * Return: 0 if successful.
 */

int main(int argc, char *argv[])
{
	int i, add, x;
	char *endptr;

	if (argc > 2)
	{
		add = 0;
		for (i = 1; i < argc; i++)
		{
			x = strtol(argv[i], &endptr, 10);
			if (*endptr)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				add = add + x;
			}
		}
		printf("%d\n", add);
	}
	else if (argc == 1)
	{
		printf("0\n");
	}

	return (0);
}
