#include <stdio.h>

/**
 * main - checks the code. prints the name of executable
 * fie.
 * @argc: This the total count of arguments.
 * @argv: This is a pointer pointing to the array of
 * arguments when the code is executed.
 * Return: 0 if successful.
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
}
