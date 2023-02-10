#include "main.h"
/**
 * _islower - Returns "1" if letter entered is lowercase
 * and returns "0" when an uppercase isentered.
 * @c: single letter input.
 * Return: 1 if int c is lowercase.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
