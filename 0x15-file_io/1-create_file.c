#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: string to be writed to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fab, i, c;

	if (filename == NULL)
		return (-1);

	fab = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fab == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	i = 0;
	while (text_content[i] != '\0')
	{
		i++;
	}
	c = write(fab, text_content, i);
	if (c == -1)
		return (-1);

	close(fab);
	return (1);
}
