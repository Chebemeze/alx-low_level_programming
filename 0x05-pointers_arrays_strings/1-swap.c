#include "main.h"

/**
 * swap_int - swaps the value between two integers
 * using pointer *a and *b.
 * @a: the first integer given.
 * @b: the second integer givn.
 */

void swap_int(int *a, int *b)
{
	int value_a = *a;
	*a = *b;
	*b = value_a;
}
