#include "main.h"

/**
 * cap_string - Capitalizes words found after seprator of words(e.g "," "\n"
 * "!!" etc)
 * @e: point variable
 * Return: returns the new capitalized string.
 */

char *cap_string(char *e)
{
	int j;
	char tab;

	tab = '\0';
	j = 0;
	while (e[j])
	{
		if (j > 0)
		{
			tab = e[j - 1];
		}
		if (e[j] >= 'a' && e[j] <= 'z')
		{
			if (tab == '\n' || tab == ' ' || tab == ',' || tab == '!')
			{
				e[j] = e[j] - 32;
			}
			else if (tab == ';' || tab == '\t' || tab == '{' || tab == '}')
			{
				e[j] = e[j] - 32;
			}
			else if (tab == ')' || tab == '(' || tab == '.' || tab == 0)
			{
				e[j] = e[j] - 32;
			}
		}
		j++
	}

	return (p);
}
