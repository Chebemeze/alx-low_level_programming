#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: returns the complete integer(taking into conside
 * ration sign convention before the string)
 */

int _atoi(char *s)
{
	int i, b, decrease, precedent;
	unsigned int total;

        decrease = 0;
	precedent = 0;
	total = 0;
	b = strlen(s);

	for (i = 0; i < b; i++)
	{
		if (s[i] == ';')
		{
			break;
		}
		if (isdigit(s[i]))
		{
			total = (total * 10) + s[i] - '0';
		}
		if (s[i] == '+')
		{
			precedent++;
		}
		else if (s[i] == '-')
		{
			decrease++;
		}
	}
	if (precedent == decrease)
	{
		total = total;
	}
	else if ((precedent > 1) && (decrease == 1))
	{
		total = -1 * total;
	}
        else if (precedent < decrease)
        {
                total = -total;
        }

	return (total);
}
