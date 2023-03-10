#include "main.h"

/**
 * _strcmp - compares two given strings
 * @s1: first string given
 * @s2: second string given
 *
 * Return: returns 0 if the elemets of two strings are identical. returns
 * a positive number if the two strings are not identical and the first
 * character present in the first string has a higher ascii value than the
 * first character of the second string. it returns a negative value if the
 * first character of the first string is lesser than the first character of
 * the second string.
 *
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}
