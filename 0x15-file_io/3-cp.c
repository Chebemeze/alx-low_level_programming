#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - copies the content of a file to another file.
 *
 * @ac: the number of arguments(name of file inclusive) passed during
 * terminal execution.
 *
 * @av: an array of the argument passed during terminal execution.
 *
 * Return: 0 if successful. If total arguments aren't three it prints
 * Usage: cp file_from file_to and exits with 97. if file_from cannot
 * be open or read, prints Error: cant't read from file NAME_OF_THE_FILE,
 * close file_to and exit with 98. If file_to cannot be opened or written
 * into prints Error: cant't read from file NAME_OF_THE_FILE and exits
 * with 99. If neither file_to or file_from can be closed, it prints
 * Error: cant't close fd FD_VALUE.
 */

int main(int ac, char **av)
{
	char buff[1024];
	int i, j, k, c, m, f;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	i = open(av[2], (O_WRONLY | O_CREAT | O_TRUNC), (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH));
	j = open(av[1], O_RDONLY);
	k = read(j, buff, 1024);
	if (j == -1 || k == -1)
	{
		dprintf(STDERR_FILENO, "Error: cant't read from file %s\n", av[1]);
		close(i);
		exit(98);
	}

	m = write(i, buff, k);
	if (m == -1 || i == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", av[2]);
		exit(99);
	}

	c = close(j);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", j);
		exit(100);
	}
	f = close(i);
	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", i);
		exit(100);
	}

	return (0);
}
