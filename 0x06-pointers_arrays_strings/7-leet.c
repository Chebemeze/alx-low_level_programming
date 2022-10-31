#include "main.h"

/**
 * leet - A functiom that encodes a given string into "1337"
 * @p: poimtwr variable
 *
 * Return: returns the encoded string
 */

char *leet(char *p)
{
	int i, j;
	char b[] = "aAeEoOtTlL";
	char e[] = "4433007711";

	for (i = 0; p[i]; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (b[j] == p[i])
			{
				e[j] = p[i];
			}
		}
	}

	return (p);
}
