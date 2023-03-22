#include "function_pointers.h"

/**
 * print_name - prints the name passed to the pointer by calling
 * the function pointed by f.
 * @name: A pointer to a name.
 * @f: A pointer to a function.
 */

void print_name(char *name, void (*f)(char *))
{
	/**
	 * either (*f)(name) or f(name) will work
	 */
	f(name);
}
