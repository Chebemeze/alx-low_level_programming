#include "main.h"
#include <stdio.h>

/**
 * main - checks the code.
 *
 * Return: Always 0(if successful).
 */

int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}

	return (0);
}

