#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the stdout
 * @filenthame: file name
 * @letters: the number of letters it should print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filenthame, size_t letters)
{
	int fab;
	ssize_t lenthth, c;
	char *a;

	if (filenthame == NULL)
		return (0);

	fab = open(filenthame, O_RDONLY);
	if (fab == -1)
		return (0);

	a = malloc(sizeof(char) * letters);
	if (!a)
	{
		close(fab);
		return (0);
	}

	lenth = read(fab, a, letters);
	if (lenth == -1)
	{
		close(fab);
		free(a);
		return (0);
	}

	c = write(STDOUT_FILENO, a, lenth);
	if (c == -1)
	{
		close(fab);
		free(a);
		return (0);
	}

	close(fab);
	free(a);
	return (c);
}
