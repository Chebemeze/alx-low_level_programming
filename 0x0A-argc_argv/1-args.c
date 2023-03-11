#include <stdio.h>

/**
 * main - checks the code. prints the name of executable
 * fie.
 * @argv: This is a pointer pointing to the array of
 * arguments when the code is executed.
 * @argc: This the total count of arguments.
 * Return: 0 if successful.
 */

int main(int argc, char *argv[])
{
	int i;

	(void)argv;
	if (argc >= 1)
	{
		i = 0;
		while (i < argc)
		{
			i++;
		}
		printf("%d\n", i - 1);
	}

	return (0);
}
