#include <stdio.h>

/**
 * main - checks the code. prints the name of executable
 * fie.
 * Return: 0 if successful.
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < 1; i++)
		{
			printf("%s", argv[i]);
		}
		printf("\n");
	}

	return (0);
}
