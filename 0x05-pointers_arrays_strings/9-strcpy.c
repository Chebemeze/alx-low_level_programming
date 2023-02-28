#include "main.h"

/**
 * *_strcpy - copies string from src(including terminating character) to dest
 * @dest: the new formed string
 * @src: the steing given
 * Return: returns the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j, len_i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	len_i = i;
	i = 0;
	for (j = 0; j <= len_i; j++)
	{
		dest[j] = src[i];
		i++;
	}
	dest[j] = '\0';

	return (dest);
}
