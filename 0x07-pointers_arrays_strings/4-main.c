#include <stdio.h>
#include "main.h"

/**
 * main - checks the code
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	char *s = "hello, world";
	char *f = "sat";
	char *t;

	t = _strpbrk(s, f);

	printf("%s\n", t);

	return (0);
}
