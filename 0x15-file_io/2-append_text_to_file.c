#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * append_text_to_file - appends to a text file. if content to append
 * is NULL, it appends nothing to the file.
 *
 * @filename: pointer to the file name.
 *
 * @text_content: pointer to the content to write to the file.
 *
 * Return: 1 if successful. -1 if create and write fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int j, l;

	if (filename == NULL)
		return (-1);

	j = open(filename, O_WRONLY | O_APPEND);
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
