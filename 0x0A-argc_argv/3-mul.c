#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the code. multiplies two numbers
 * @argc: This the total count of arguments.
 * @argv: This is a pointer pointing to the array of
 * arguments when the code is executed.
 * Return: 0 if successful.
 */

int main(int argc, char *argv[])
{
	int i, mul;
	if (argc > 1 && argc <= 3)
	{
		mul = 1;
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
