#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the code.
 *
 * Return: always 0.
 */

int main(void)
{
	char *s;

	s = str_concat(NULL, NULL);
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
