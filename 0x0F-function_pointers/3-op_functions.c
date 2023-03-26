#include "3-calc.h"

/**
 * op_add - adds b to a.
 * @a: first integer.
 * @b: Second integer.
 * Return: returns the result of addition.
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substracts b from a.
 * @a: first integer.
 * @b: Second integer.
 * Return: returns the result of substraction.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul -multiply a by b.
 * @a: first integer.
 * @b: Second integer.
 * Return: returns the result of multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - adds a by b.
 * @a: first integer.
 * @b: Second integer.
 * Return: returns the result of division.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - finds the remainder when a is divided by b.
 * @a: first integer.
 * @b: Second integer.
 * Return: returns the remainder.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
