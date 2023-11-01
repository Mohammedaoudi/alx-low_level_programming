#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fed;
	ssize_t v;
	ssize_t te;

	fed = open(filename, O_RDONLY);
	if (fed == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	te = read(fed, buff, letters);
	v = write(STDOUT_FILENO, buff, te);

	free(buff);
	close(fed);
	return (v);
}

