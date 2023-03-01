#include "main.h"

/**
 * cap_string - Capitalizes words found after seprator of words(",",
 * "!!" etc).
 * @e: point variable
 * Return: returns the new capitalized string.
 */

char *cap_string(char *e)
{
	int j;
	char s;

	s = '\0';
	j = 0;
	while (e[j])
	{
		if (j > 0)
		{
			s = e[j - 1];
		}
		if (e[j] >= 'a' && e[j] <= 'z')
		{
			if (s == '\n' || s == ' ' || s == ',' || s == '!')
			{
				e[j] = e[j] - 32;
			}
			else if (s == ';' || s == '\t' || s == '{' || s == '}')
			{
				e[j] = e[j] - 32;
			}
			else if (s == ')' || s == '(' || s == '.' || j == 0)
			{
				e[j] = e[j] - 32;
			}
		}
		j++;
	}

	return (&e[0]);
}
