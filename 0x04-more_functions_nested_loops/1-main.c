#include "main.h"
#include <stdio.h>

/**
 * main - checks the code
 * Return: returns 0 if successful
 */

int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));

	return (0);
}
