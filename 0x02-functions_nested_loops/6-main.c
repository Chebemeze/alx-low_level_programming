#include "main.h"
#include <stdio.h>
/**
 * main - checks "_abs()" function if it works.
 *
 * Return: returns 0 if successful.
 */

int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);

	return (0);
}
