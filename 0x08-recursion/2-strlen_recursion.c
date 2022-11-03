#include "main.h"

/**
 * _strlen_recursion - prints the lenth of a string
 * @s: the string give
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int str_length;

	str_length = 0;
	if ((s + 1) != '\0')
	{
		strlength++;
		str_length += _strlen_recursion(s + 1);
	}
	return (str_length);
}
