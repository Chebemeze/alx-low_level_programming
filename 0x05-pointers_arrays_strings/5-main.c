#include "main.h"
#include <stdio.h>

/**
 * main - checks the code
 *
 * Return: 0 if successful.
 */

int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);

	return (0);
}
