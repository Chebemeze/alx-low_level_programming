#include "main.h"

/**
 * rev_string - Revereses a atring
 *
 * @s: The string to be reverse
 */

void rev_string(char *s)
{
	int f, j, l;

	char p;

	j = 0;
	f = 0;
	while (s[f])
	{
		f++;
	}
	f--
	l = f / 2;
	while (f > l)
	{
		p = s[f];
		s[f] = s[j];
		s[j] = p;
		j++;
		f--;
	}
}
