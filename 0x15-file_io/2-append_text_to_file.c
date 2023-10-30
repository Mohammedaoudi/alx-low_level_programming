#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: text to append
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fab, i, ac;

	if (filename == NULL)
		return (-1);

	fab = open(filename, O_WRONLY | O_APPEND);
	if (fab == -1)
		return (-1);

	if (text_content)
	{
		i = 0;
		for (i = 0; text_content[i]; i++)
			;

		ac = write(fab, text_content, i);

		if (ac == -1)
		{
			return (-1);
		}
	}

	close(fab);
	return (1);
}
