#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a separator and then new line.
 * @separator: pointer to the separator given.
 * @n: The number of parameters passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num);
}
