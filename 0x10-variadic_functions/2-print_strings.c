#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a separator and then new line.
 * @separator: pointer to the separator given.
 * @n: The number of parameters passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	char *str;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(num, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num);
}
