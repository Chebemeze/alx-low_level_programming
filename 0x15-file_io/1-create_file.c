#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * create_file - creates a new text file. ifi it already exist, truncates
 * and write on it.
 *
 * @filename: pointer to the file name.
 *
 * @text_content: pointer to the content to write to the file.
 *
 * Return: 1 if successful. -1 if create and write fails
 */

int create_file(const char *filename, char *text_content)
{
	int j, l;

	if (filename == NULL)
		return (-1);

	j = open(filename, O_CREAT | O_WRONLY | O_TRUNC, (S_IRUSR | S_IWUSR));
	if (j == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	l = write(j, text_content, strlen(text_content));
	if (l == -1)
	{
		close(j);
		return (-1);
	}

	close(j);
	return (1);
}
