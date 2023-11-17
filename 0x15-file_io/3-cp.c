#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * creates_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file baf is storing chars for.
 *
 * Return: A pointer to the newly-allocated baf.
 */
char *creates_buffer(char *file)
{
	char *baf;

	baf = malloc(sizeof(char) * 1024);

	if (baf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (baf);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_frm does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_frm cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int frm, t2o, red, wrt;
	char *baf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_frm file_to\n");
		exit(97);
	}

	baf = create_buffer(argv[2]);
	frm = open(argv[1], O_RDONLY);
	red = read(frm, baf, 1024);
	t2o = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read frm file %s\n", argv[1]);
			free(baf);
			exit(98);
		}

		wrt = write(to, baf, r);
		if (t2o == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(baf);
			exit(99);
		}

		red = read(frm, baf, 1024);
		t2o = open(argv[2], O_WRONLY | O_APPEND);

	} while (red > 0);

	free(baf);
	close_file(frm);
	close_file(t2o);

	return (0);
}

