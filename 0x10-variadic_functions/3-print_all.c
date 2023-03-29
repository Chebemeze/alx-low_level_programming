#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_char(va_list argmt);
void print_integer(va_list argmt);
void print_float(va_list argmt);
void print_string(va_list argmt);

/**
 * print_char - prints a char when called.
 * @argmt: argument passed that is to be printed.
 */
void print_char(va_list argmt)
{
	printf("%c", va_arg(argmt, int));
}

/**
 * print_integer - prints an int when called.
 * @argmt: argument passed that is to be printed.
 */
void print_integer(va_list argmt)
{
	printf("%d", va_arg(argmt, int));
}

/**
 * print_float - prints a float when called.
 * @argmt: argument passed that is to be printed.
 */
void print_float(va_list argmt)
{
	printf("%f", va_arg(argmt, double));
}

/**
 * print_string - prints a string if it not NULL, if NULL prints ("nil").
 * @argmt: argument passed that is to be printed.
 */
void print_string(va_list argmt)
{
	char *q;

	q = va_arg(argmt, char *);
	if (q == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", q);
}

/**
 * print_all - selects the argument to print followed by a separator
 * in the code the separator is denoted by pointer s.
 * @format: a pointer inwhich its value and address cannot be changed.
 * it specifies the data type of arguments to print(char, int, float, string).
 * Any argument that does not fall into the above category wil be ignored.
 */
void print_all(const char * const format, ...)
{
	va_list argmt;
	int i, j;
	char *s = "";

	funct_s array[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(argmt, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (*(array[j].symbol) != *(format + i)))
		{
			j++;
		}
		if (j < 4)
		{
			printf("%s", s);
			array[j].f(argmt);
			s = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(argmt);
}
