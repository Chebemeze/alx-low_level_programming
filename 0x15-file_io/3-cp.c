#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * completes_main - It completes the main function by writing
 * to the new file.
 *
 * @av: an array of the argument passed during terminal execution.
 *
 * @buff: a pointer to the array called buff in main function.
 *
 * @j: filde descriptor from the file we want to copy from.
 * @i: file descriptor from the file we want to copy to (file_to).
 * @k: The number of files read from file_from.
 */
void completes_main(char ***av, char *buff, int j, int i, ssize_t k);
void completes_main(char ***av, char *buff, int j, int i, ssize_t k)
{
	if ((write(i, buff, k)) != k)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", **(av + 2));
		close(j);
		close(i);
		exit(99);
	}
	if (close(j) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", j);
		close(i);
		exit(100);
	}
	if (close(i) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", i);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 *
 * @ac: the number of arguments(name of file inclusive) passed during
 * terminal execution.
 *
 * @av: an array of the argument passed during terminal execution.
 *
 * Return: 0 if successful. If total arguments aren't three it prints
 * Usage: cp file_from file_to and exits with 97.
 */
int main(int ac, char **av)
{
	char buff[1024];
	int i, j, flags;
	mode_t modes;
	ssize_t k;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	j = open(av[1], O_RDONLY);
	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: cant't read from file %s\n", av[1]);
		exit(98);
	}
	k = read(j, buff, sizeof(buff));
	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: cant't read from file %s\n", av[1]);
		close(j);
		exit(98);
	}
	flags = (O_WRONLY | O_CREAT | O_TRUNC);
	modes = (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH);
	i = open(av[2], flags, modes);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", av[2]);
		close(j);
		exit(99);
	}

	completes_main(&av, &buff[0], j, i, k);

	return (0);
}
