#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 *
 * @filename: pointer to the file name.
 *
 * @letters: the number of letters it should read and print.
 *
 * Return: The number of letters printed if successful.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t i, j, l;

	if (filename == NULL)
		return (0);

	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
		return (0);

	j = open(filename, O_RDONLY);
	if (j == -1)
	{
		free(ptr);
		close(j);
		return (0);
	}

	i = read(j, ptr, letters);
	if (i == -1)
	{
		free(ptr);
		close(j);
		return (0);
	}

	l = write(STDOUT_FILENO, ptr, letters);
	if (l == -1)
	{
		free(ptr);
		close(j);
		return (0);
	}

	free(ptr);
	close(j);
	return (l);
}
